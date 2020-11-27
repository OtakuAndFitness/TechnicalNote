Shader "Unlit/DepthHeightFog" {
    Properties {
        [KeywordEnum(VIEWSPACE,WORLDSPACE)] _DIST_TYPE ("Distance type", int) = 0
        [KeywordEnum(LINEAR,EXP,EXP2)] _FUNC_TYPE ("Calculate Func type", int) = 0
        _MainTex("Texture",2D) = "white"{}
        _NoiseTex ("Noise Texture", 2D) = "white" {}

        _FogColor ("Fog Color", Color) = (0.5, 0.5, 0.5, 1)

        _DepthStart ("Depth Start", Float) = 0
        _DepthEnd ("Depth End", Float) = 100

        _HeightStart ("Height Start", Float) = 1
        _HeightEnd ("Height End", Float) = 0 

        _WorldPosScale ("WorldPos Scale", Range(0,0.1)) = 0
        _NoiseSpX ("Noise Speed X",Range(0,1)) = 1
        _NoiseSpY ("Noise Speed Y",Range(0,1)) = 1
        _DepthNoiseScale ("Depth Noise Scale",Range(0,100)) = 4
        _HeightNoiseScale ("Height Noise Scale",Range(0,100)) = 4

        _Density ("Fog Density", Range(0, 1)) = 0.3

        _DepthHeightRatio ("Depth Height Ratio",Range(0,1)) = 0
    }

    SubShader {
        Tags {"Queue"="Transparent"}
        Blend SrcAlpha OneMinusSrcAlpha
        ZWrite Off 
        ZTest Always 
        Cull Off
        Pass {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #pragma shader_feature _DIST_TYPE_VIEWSPACE _DIST_TYPE_WORLDSPACE
            #pragma shader_feature _FUNC_TYPE_LINEAR _FUNC_TYPE_EXP _FUNC_TYPE_EXP2
            #include "UnityCG.cginc"
            struct appdata {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
            };
            struct v2f {
                float4 vertex : SV_POSITION;
                float2 uv : TEXCOORD0;
                float3 ray : TEXCOORD1;
            };

            sampler2D _CameraDepthTexture;
            float4 _CameraDepthTexture_ST;
            sampler2D _MainTex;
            float4 _MainTex_ST;
            float4 _MainTex_TexelSize;
            sampler2D _NoiseTex;
            float4 _NoiseTex_ST;
            fixed4 _FogColor;
            float4x4 _Ray;
            float _HeightStart;
            float _HeightEnd;
            float _DepthStart;
            float _DepthEnd;
            float _WorldPosScale;
            float _NoiseSpX;
            float _NoiseSpY;
            float _DepthNoiseScale;
            float _HeightNoiseScale;
            float _Density;
            float _DepthHeightRatio;
            
            v2f vert (appdata v) {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.uv,_MainTex);

                int index = 0;
                if (v.uv.x < 0.5 && v.uv.y < 0.5){
                    index = 0;
                }else if (v.uv.x > 0.5 && v.uv.y < 0.5){
                    index = 1;
                }else if (v.uv.x > 0.5 && v.uv.y > 0.5){
                    index = 2;
                }else{
                    index = 3;
                }
                // int xx = (int)v.vertex.x;
                // int yy = (int)v.vertex.y;
                // int index = abs(3 - xx - 3 * yy);

                #if UNITY_UV_STARTS_AT_TOP
                    if (_MainTex_TexelSize.y < 0){
                        index = 3 - index;
                        o.uv.y = 1 - o.uv.y;
                    }
                #endif

                o.ray = _Ray[index].xyz;
                return o;
            }
            fixed4 frag (v2f i) : SV_Target {
                float4 finalCol;

                float depth = SAMPLE_DEPTH_TEXTURE(_CameraDepthTexture, i.uv);
                float3 wp = _WorldSpaceCameraPos.xyz + i.ray * Linear01Depth(depth);

                float noise = tex2D(_NoiseTex, wp.xz * _WorldPosScale + _Time.x * fixed2(_NoiseSpX, _NoiseSpY)).r;
                // float minusNoise = tex2D(_NoiseTex, wp.xz * _WorldPosScale + _Time.x * fixed2(_NoiseSpX, _NoiseSpY)).b;
                // noise *= minusNoise; 

                float dist = 0;
                #if _DIST_TYPE_VIEWSPACE 
                    dist = LinearEyeDepth(depth);;
                #else
                    float linear01depth = length(i.ray * Linear01Depth(depth));
                #endif

                float depthFactor = 0;
                #if _FUNC_TYPE_LINEAR
                    depthFactor = (_DepthEnd - dist) / (_DepthEnd - _DepthStart);
                    depthFactor *= _Density;
                #elif _FUNC_TYPE_EXP
                    depthFactor = exp(-(_Density * dist));
                #else
                    depthFactor = exp(-pow(_Density * dist, 2));
                #endif

                float depthNoise = noise * _DepthNoiseScale;
                depthFactor *= depthNoise;
                depthFactor = saturate(depthFactor);

                float heightNoise = noise * _HeightNoiseScale;
                // float heightMinusNoise = minusNoise * _HeightNoiseScale;
                float heightFactor = (_HeightEnd - wp.y - heightNoise) / (_HeightEnd - _HeightStart);
                heightFactor *= _Density;
                heightFactor = saturate(heightFactor);

                float4 mainCol = tex2D(_MainTex, i.uv);

                float4 depthCol = lerp(mainCol, _FogColor, depthFactor);
                float4 heightCol = lerp(mainCol, _FogColor, heightFactor);

                return lerp(depthCol, heightCol, _DepthHeightRatio);
                // return heightCol;
                // return depthCol;
                // return tex2D(_CameraDepthTexture,UnityStereoScreenSpaceUVAdjust(i.uv, _CameraDepthTexture_ST));
            }
            ENDCG
        }
    }
}
