Shader "Unlit/NormalMapping"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
        _NormalTex ("Normal", 2D) = "white"{} 
        _NormalScale ("Normal Scale", Range(-2,2)) = 1
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

            #include "Lighting.cginc"
            #include "UnityCG.cginc"

            // struct appdata
            // {
            //     float4 vertex : POSITION;
            //     float2 uv : TEXCOORD0;
            // };

            struct v2f
            {
                float2 uv : TEXCOORD0;
                float3 lightDirection : TEXCOORD2;
                float2 texNormal : TEXCOORD3;
                UNITY_FOG_COORDS(1)
                float4 vertex : SV_POSITION;
            };

            sampler2D _MainTex;
            float4 _MainTex_ST;
            sampler2D _NormalTex;
            float4 _NormalTex_ST;
            float _NormalScale;

            v2f vert (appdata_tan v)//一定要用appdata_tan否则取不到变量TANGENT_SPACE_ROTATION就用不了了
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.texcoord, _MainTex);
                o.texNormal = TRANSFORM_TEX(v.texcoord, _NormalTex);

                TANGENT_SPACE_ROTATION;
                //unity自带命令，实际上就是在算下面两行东西
                //float3 binormal = cross(v.tan.xyz,v.normal) * v.tan.w;
                //float3x3 rotation = float3x3(v.tan.xyz,binormal,v.normal);
                float3 ld = mul(unity_WorldToObject, _WorldSpaceLightPos0.xyz);//将光向量从世界空间转到模型空间
                o.lightDirection = mul(rotation, ld);//再从模型空间转到切线空间

                UNITY_TRANSFER_FOG(o,o.vertex);

                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                // sample the texture
                fixed4 col = tex2D(_MainTex, i.uv);

                float3 normal = UnpackNormal(tex2D(_NormalTex, i.texNormal));//获取图中法线向量，把normal图的texture type设置正确会得到正确结果
                normal.xy *= _NormalScale;//控制凹凸程度，若是直接normal*_NormalScale的话若_NormalScale为0则下面的diffuseLight项为0，只用UNITY_LIGHTMODEL_AMBIENT项会导致cube黑乎乎的，不好看
                normal.z = 1 - saturate(sqrt(dot(normal.xy,normal.xy)));//因为xy拉伸了所以z要重新算，本来x*x + y*y + z*z = 1,所以z = 1 - sqrt（x*x + y*y）,而dot(normal.xy,normal.xy)就是在表达x*x + y*y

                float3 ambientLight = UNITY_LIGHTMODEL_AMBIENT.rgb;
                
                float3 diffuseLight = _LightColor0.rgb * saturate(dot(i.lightDirection.xyz,normal));

                float4 finalCol = float4((ambientLight + diffuseLight) * col.rgb,col.a);
                // apply fog
                UNITY_APPLY_FOG(i.fogCoord, finalCol);
                return finalCol;
            }
            ENDCG
        }
    }
}
