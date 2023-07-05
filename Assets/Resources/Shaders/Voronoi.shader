Shader "Unlit/Voronoi"
{
    Properties
    {
        _CellOffset ("Cell Offset", float) = 10
        _CellDensity ("Cell Density", float) = 50
        _ViewOffset ("View Offset", Range(0, 0.1)) = 0.02
        [KeywordEnum(X, Y, Z)] _Out("Channel", Float) = 0
        [KeywordEnum(Voronoi, Voronoi2D, Voronoi3D)] _Type ("Noise type", Float) = 0

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

            #include "UnityCG.cginc"
            #include "VoronoiNoise.cginc"

            #pragma shader_feature _OUT_X _OUT_Y _OUT_Z
            #pragma shader_feature _TYPE_VORONOI _TYPE_VORONOI2D _TYPE_VORONOI3D

            struct appdata
            {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
                float3 normal : Normal;
                float4 tangent : TANGENT;
            };

            struct v2f
            {
                float2 uv : TEXCOORD0;
                float4 vertex : SV_POSITION;
                float3 worldPos : TEXCOORD1;
            };

            float _CellOffset;
            float _CellDensity;
            float _ViewOffset;

            v2f vert (appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = v.uv;
                float3 positionWS = mul(unity_ObjectToWorld, v.vertex).xyz;
                o.worldPos = positionWS;
                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                half3 viewDir = normalize(_WorldSpaceCameraPos.xyz - i.worldPos);
                float2 viewUV = i.uv + viewDir.xy * _ViewOffset;
                #if defined(_TYPE_VORONOI)
                    float2 noise = Voronoi(viewUV, _CellOffset, _CellDensity).xy;
                    #if defined(_OUT_X)
                        return fixed4(noise.x,1,1,1);
                    #elif defined(_OUT_Y)
                        return fixed4(1,noise.y,1,1);
                    #endif
                #elif defined(_TYPE_VORONOI2D)
                    float3 noise = voronoiNoise2D(viewUV);
                    #if defined(_OUT_X)
                        return fixed4(noise.x,1,1,1);
                    #elif defined(_OUT_Y)
                        return fixed4(1,noise.y,1,1);
                    #elif defined(_OUT_Z)
                        return fixed4(1,1,noise.z,1);
                    #endif
                #elif defined(_TYPE_VORONOI3D)
                    float3 noise = voronoiNoise3D(i.worldPos * _CellDensity);
                    #if defined(_OUT_X)
                        return fixed4(noise.x,1,1,1);
                    #elif defined(_OUT_Y)
                        return fixed4(1,noise.y,1,1);
                    #elif defined(_OUT_Z)
                        return fixed4(1,1,noise.z,1);
                    #endif
                #endif
                
                return 0;
            }
            ENDCG
        }
    }
}
