#include "UnityCG.cginc"

#define DistanceToProjectionWindow 5.671281819617709   // 1.0 / tan(0.5 * radians(20))
#define DPTimes300 1701.384545885313                     //DistanceToProjectionWindow * 300

struct appdata
{
    float4 vertex : POSITION;
    float2 uv : TEXCOORD0;
};

struct v2f
{
    float2 uv : TEXCOORD0;
    float4 vertex : SV_POSITION;
};

sampler2D _CameraDepthTexture;
float4 _CameraDepthTexture_TexelSize;
sampler2D _MainTex;
float4 _MainTex_ST;
float _SSSScaler;
float4 _Kernel[100];
int _Samples;

v2f vert (appdata v)
{
    v2f o;
    o.vertex = v.vertex;
    o.uv = TRANSFORM_TEX(v.uv, _MainTex);
    return o;
}

float4 SSS(float4 sceneColor, float2 uv, float2 sssIntensity){
    float sceneDepth = LinearEyeDepth(SAMPLE_DEPTH_TEXTURE(_CameraDepthTexture, uv));
    float blurLength = DistanceToProjectionWindow / sceneDepth;
    float2 uvOffset = sssIntensity * blurLength;
    float4 blurSceneColor = sceneColor;
    blurSceneColor.rgb *= _Kernel[0].rgb;

    [loop]
    for(int i=1;i<_Samples;i++){
        float2 sssUV = uv + _Kernel[i].a * uvOffset;
        float4 sssSceneColor = tex2D(_MainTex, sssUV);
        float sssDepth = LinearEyeDepth(SAMPLE_DEPTH_TEXTURE(_CameraDepthTexture, sssUV)).r;
        float sssScale = saturate(DPTimes300 * sssIntensity * abs(sceneDepth - sssDepth));
        sssSceneColor.rgb = lerp(sssSceneColor.rgb, sceneColor.rgb,sssScale);
        blurSceneColor.rgb += _Kernel[i].rgb * sssSceneColor.rgb;
    }
    return blurSceneColor;
}