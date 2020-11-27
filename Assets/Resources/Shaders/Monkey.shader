Shader "Unlit/Monkey"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
        _Color ("Main Color",Color) = (1,1,1,1)
        [Toggle]_IsDir ("Directional LightMap ?", int) = 0
        
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
            #pragma multi_compile LIGHTMAP_OFF LIGHTMAP_ON
            #pragma shader_feature _ISDIR_ON
            #include "UnityCG.cginc"

            struct appdata
            {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
                float2 uv1 : TEXCOORD1;
                float3 normal : NORMAL;
            };

            struct v2f
            {
                float2 uv : TEXCOORD0;
                float4 vertex : SV_POSITION;
                #ifdef LIGHTMAP_ON
                    float2 uvLM : TEXCOORD1;
                #endif
                float3 worldNormal : NORMAL;
            };

            sampler2D _MainTex;
            float4 _MainTex_ST;
            fixed4 _Color;

            v2f vert (appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                #ifdef LIGHTMAP_ON
                    o.uvLM = v.uv1.xy * unity_LightmapST.xy + unity_LightmapST.zw;
                #endif
                o.worldNormal = UnityObjectToWorldNormal(v.normal);
                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                float3 normal = normalize(i.worldNormal);
                // sample the texture
                fixed4 col = tex2D(_MainTex, i.uv);
                col *= _Color;
                #ifdef LIGHTMAP_ON
                    #ifdef _ISDIR_ON
                        float4 lightmapDir = UNITY_SAMPLE_TEX2D_SAMPLER(unity_LightmapInd, unity_Lightmap, i.uvLM);
                        float3 lm = DecodeDirectionalLightmap(col,lightmapDir,normal);
                    #else
                        fixed3 lm = DecodeLightmap(UNITY_SAMPLE_TEX2D(unity_Lightmap,i.uvLM));
                    #endif
                    col.rgb *= lm;
                #endif
                return col;
            }
            ENDCG
        }
    }
}
