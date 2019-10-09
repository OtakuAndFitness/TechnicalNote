Shader "Unlit/ParallaxOcclusion"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
        _NormalTex ("Normal Texture",2D) = "white"{}
        _HeightTex ("Height Texture",2D) = "white"{}
        _SpecularColor("Specular Color", Color) = (1,1,1,1)
		_Gloss("Gloss", Range(32, 256)) = 64
        _Parallax("Parallax", Range(-0.05,0.05)) = 0.01
    }
    SubShader
    {
        Tags { "RenderType"="Opaque" }
        LOD 100

        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            // make fog work
            #pragma multi_compile_fog

            #include "UnityCG.cginc"
            #include "Lighting.cginc"

            struct appdata
            {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
            };

            struct v2f
            {
                float2 uv : TEXCOORD0;
                UNITY_FOG_COORDS(1)
                float4 vertex : SV_POSITION;
                float3 viewDir : TEXCOORD2;
                float3 lightDir : TEXCOORD3;
            };

            sampler2D _MainTex;
            float4 _MainTex_ST;
            sampler2D _NormalTex;
            float4 _NormalTex_ST;
            sampler2D _HeightTex;
            float4 _HeightTex_ST;
            float4 _SpecularColor;
            float _Gloss;
            float _Parallax;

            v2f vert (appdata_tan v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.texcoord, _MainTex);

                TANGENT_SPACE_ROTATION;
                o.viewDir = mul(rotation,ObjSpaceViewDir(v.vertex));
                o.lightDir = mul(rotation,ObjSpaceLightDir(v.vertex));

                UNITY_TRANSFER_FOG(o,o.vertex);
                return o;
            }

            float2 ParallaxMapping(float height,float3 viewDir,float2 uv)
            {
                float layerNum = 10.0;
                float eachLayer = 0.1;
                float currentLayerDepth = 0.0;
                float currentDepth = tex2D(_HeightTex,uv).a;
                float3 v = normalize(viewDir); 
                float step = v.xy / v.z / layerNum * height;
                float2 currentUV = uv;
                while (currentLayerDepth < currentDepth){
                    currentUV -= step;
                    currentDepth = tex2Dlod(_HeightTex,float4(currentUV,0,0)).a;
                    currentLayerDepth += eachLayer;
                }
                //到此为陡峭视差贴图，加上后面为视差遮蔽贴图
                float2 preUV = currentUV + step;
                float preLayerDepth = currentLayerDepth - eachLayer;
                float afterDepth = currentDepth - currentLayerDepth;
                float beforeDepth = tex2D(_HeightTex,preUV).a - preLayerDepth;
                float weight = afterDepth / (afterDepth - beforeDepth);
                float2 res = preUV * weight + currentUV * (1 - weight);
                return res;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                float2 uv = ParallaxMapping(_Parallax,i.viewDir,i.uv);
                if(uv.x > 1.0 || uv.y > 1.0 || uv.x < 0.0 || uv.y < 0.0) //去掉边上的一些古怪的失真，在平面上工作得挺好的
					discard;
                // sample the texture
                fixed4 col = tex2D(_MainTex, uv);
                float3 normal = normalize(UnpackNormal(tex2D(_NormalTex,uv)));
                
                float3 ld = normalize(i.lightDir);
                float3 vd = normalize(i.viewDir);

                fixed3 ambient = UNITY_LIGHTMODEL_AMBIENT.xyz;
				fixed3 diffuse = _LightColor0.rgb * saturate(dot(normal, ld));
				float3 hd = normalize(ld + vd);
				fixed3 specular = _LightColor0.rgb * _SpecularColor.rgb * pow(saturate(dot(hd, normal)), _Gloss);

				fixed4 finalColor = fixed4((ambient + diffuse + specular) * col.rgb, 1.0);
                // apply fog
                UNITY_APPLY_FOG(i.fogCoord, finalColor);
                return finalColor;
            }
            ENDCG
        }
    }
}
