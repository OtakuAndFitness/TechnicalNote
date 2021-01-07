Shader "Unlit/Monkey"
{
    Properties
    {
        // _MainTex ("Texture", 2D) = "white" {}
        _Color ("Main Color",Color) = (1,1,1,1)
        [Toggle]_IsDir ("Directional LightMap ?", int) = 0
        
    }
    SubShader
    {
        Tags { "RenderType"="Opaque"}
        LOD 100

        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            
            #pragma multi_compile LIGHTMAP_OFF LIGHTMAP_ON
            #pragma multi_compile SHADOWS_SHADOWMASK
            #pragma multi_compile SHADOWS_SCREEN
            #pragma shader_feature _ISDIR_ON
            
            #include "UnityCG.cginc"
            #include "AutoLight.cginc"


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
                float4 pos : SV_POSITION;
                #ifdef LIGHTMAP_ON
                    float2 uvLM : TEXCOORD1;
                #endif
                float3 worldNormal : NORMAL;
                float4 worldPos : TEXCOORD3;
                SHADOW_COORDS(2)

            };

            sampler2D _MainTex;
            float4 _MainTex_ST;
            fixed4 _Color;

            v2f vert (appdata v)
            {
                v2f o;
                o.pos = UnityObjectToClipPos(v.vertex);
                o.worldPos = mul(unity_ObjectToWorld, v.vertex);
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                #ifdef LIGHTMAP_ON
                    o.uvLM = v.uv1.xy * unity_LightmapST.xy + unity_LightmapST.zw;
                #endif
                o.worldNormal = UnityObjectToWorldNormal(v.normal);
                TRANSFER_SHADOW(o);
                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                float directAtten = SHADOW_ATTENUATION(i);
                float3 normal = normalize(i.worldNormal);
                // sample the texture
                // fixed4 col = tex2D(_MainTex, i.uv);
                fixed4 col = _Color;
                #ifdef LIGHTMAP_ON
                    #ifdef _ISDIR_ON
                        float4 lightmapDir = UNITY_SAMPLE_TEX2D_SAMPLER(unity_LightmapInd, unity_Lightmap, i.uvLM);
                        float3 lm = DecodeDirectionalLightmap(col,lightmapDir,normal);
                    #else
                        fixed3 lm = DecodeLightmap(UNITY_SAMPLE_TEX2D(unity_Lightmap,i.uvLM));
                    #endif

                    float viewZ = dot(_WorldSpaceCameraPos - i.worldPos, UNITY_MATRIX_V[2].xyz);
		            float shadowFadeDistance = UnityComputeShadowFadeDistance(i.worldPos, viewZ);
                    float shadowFade = UnityComputeShadowFade(shadowFadeDistance);

                    float bakedAtten = UnitySampleBakedOcclusion(i.uvLM,i.worldPos);
                    float atten = UnityMixRealtimeAndBakedShadows(directAtten, bakedAtten, shadowFade);
                    col.rgb *= atten;
                    col.rgb *= lm;
                #endif
                return col;
            }
            ENDCG
        }
    }
    Fallback "VertexLit"

}
