Shader "Unlit/ToonShading1"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
        _Outline ("Outline Width", Range(0,1)) = 0.1
        _OutlineCol ("Outline Color", Color) = (0,0,0,1)
        _DiffuseCol ("Diffuse Color", Color) = (1,1,1,1)
        _SpecularCol ("Specular Color", Color) = (1,1,1,1)
        _DiffuseSeg ("Diffuse Segment", Vector) = (0.1,0.3,0.6,1.0)
        _SpecularSeg ("Specular Segment", Range(0,1)) = 0.5
        _Gloss ("Gloss",Range(1,500)) = 40

    }
    SubShader
    {
        Tags { "RenderType"="Opaque"}
        LOD 100

        Pass
        {
            Cull Front

            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag

            #include "UnityCG.cginc"

            struct appdata
            {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
                float3 normal : NORMAL;
            };

            struct v2f
            {
                float2 uv : TEXCOORD0;
                UNITY_FOG_COORDS(1)
                float4 vertex : SV_POSITION;
                float4 color : COLOR;

            };

            float _Outline;
            fixed4 _OutlineCol;

            v2f vert (appdata v)
            {
                v2f o;
                float4 pos = mul(UNITY_MATRIX_MV, v.vertex);
                float3 normal = mul((float3x3)UNITY_MATRIX_IT_MV, v.normal); 
                normal.z = 0.01;
                pos += float4(normalize(normal), 0)  * _Outline;
                o.vertex = mul(UNITY_MATRIX_P, pos);
                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {  
                return _OutlineCol;
            }
            ENDCG
        }

        Pass
        {
            Tags{"LightMode"="ForwardBase"}

            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            // make fog work
            #pragma multi_compile_fog
			#pragma multi_compile_fwdbase

            #include "UnityCG.cginc"
            #include "Lighting.cginc"
            #include "AutoLight.cginc"


            struct appdata
            {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
                float3 normal : NORMAL;
            };

            struct v2f
            {
                float2 uv : TEXCOORD0;
                UNITY_FOG_COORDS(1)
                float4 pos : SV_POSITION;
                float3 worldPos : TEXCOORD2;
                float3 worldNormal : TEXCOORD3;
                SHADOW_COORDS(4)

            };

            sampler2D _MainTex;
            float4 _MainTex_ST;
            float _Gloss;
            float4 _DiffuseSeg;
            float _SpecularSeg;
            fixed4 _SpecularCol;
            fixed4 _DiffuseCol;

            v2f vert (appdata v)
            {
                v2f o;
                o.pos = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                o.worldPos = mul(unity_ObjectToWorld,v.vertex).xyz;
                o.worldNormal = UnityObjectToWorldNormal(v.normal);
                UNITY_TRANSFER_FOG(o,o.pos);
                TRANSFER_SHADOW(o);

                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                // sample the texture
                fixed4 col = tex2D(_MainTex, i.uv);

				UNITY_LIGHT_ATTENUATION(atten, i, i.worldPos);

                float3 worldNormal = normalize(i.worldNormal);
                float3 worldView = UnityWorldSpaceViewDir(i.worldPos);
                float3 worldLight = UnityWorldSpaceLightDir(i.worldPos);
                float3 halfVector = normalize(worldLight + worldView);

                fixed4 ambient = UNITY_LIGHTMODEL_AMBIENT;

                fixed diff = dot(worldNormal,normalize(worldLight));
                diff = diff * 0.5 + 0.5;
                fixed spec = saturate(dot(worldNormal,halfVector));
                spec = pow(spec,_Gloss);

                fixed w = fwidth(diff) * 2.0;
                if (diff < _DiffuseSeg.x + w){
                    diff = lerp(_DiffuseSeg.x,_DiffuseSeg.y,smoothstep(_DiffuseSeg.x - w,_DiffuseSeg.x + w,diff));
                }else if (diff < _DiffuseSeg.y + w){
                    diff = lerp(_DiffuseSeg.y,_DiffuseSeg.z,smoothstep(_DiffuseSeg.y - w,_DiffuseSeg.y + w,diff));
                }else if (diff < _DiffuseSeg.z + w){
                    diff = lerp(_DiffuseSeg.z,_DiffuseSeg.w,smoothstep(_DiffuseSeg.z - w,_DiffuseSeg.z + w,diff));
                }else{
                    diff = _DiffuseSeg.w;
                }

                w = fwidth(spec);
                if (spec < _SpecularSeg + w){
                    spec = lerp(0,1,smoothstep(_SpecularSeg - w,_SpecularSeg + w,spec));
                }else{
                    spec = 1;
                }

                fixed4 diffuse = _LightColor0 * diff * _DiffuseCol * col;
                fixed4 specular = _LightColor0 * spec * _SpecularCol;
                fixed4 finalCol = ambient + ((diffuse + specular) * atten);
                // apply fog
                UNITY_APPLY_FOG(i.fogCoord, finalCol);
                return finalCol;
            }
            ENDCG
        }
    }
    Fallback "Diffuse"
}
