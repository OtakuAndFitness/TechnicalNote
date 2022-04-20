Shader "Unlit/GodRay"
{
    Properties
	{
		_MainTex("Base (RGB)", 2D) = "white" {}
		_BlurTex("Blur", 2D) = "white"{}
	}
 
	CGINCLUDE
	#define RADIAL_SAMPLE_COUNT 6
	#include "UnityCG.cginc"
	
	// 提取亮部图像
	struct v2fExtractBright
	{
		float4 pos : SV_POSITION;
		float2 uv : TEXCOORD0;
	};
 
	// 径向模糊
	struct v2fRadialBlur
	{
		float4 pos : SV_POSITION;
		float2 uv  : TEXCOORD0;
		float2 blurOffset : TEXCOORD1;
	};
 
	// 混合
	struct v2fGodRay
	{
		float4 pos : SV_POSITION;
		float2 uv  : TEXCOORD0;
		float2 uv1 : TEXCOORD1;
	};
 
	sampler2D _MainTex;
	float4 _MainTex_TexelSize;
	sampler2D _BlurTex;
	float4 _BlurTex_TexelSize;
	float4 _ViewPortLightPos;
	
	float4 _offsets;
	float4 _ColorThreshold;
	float4 _LightColor;
	float _LightFactor;
	float _PowFactor;
	float _LightRadius;
 
	// 提取亮部图像VS
	v2fExtractBright vertExtractBright(appdata_img v)
	{
		v2fExtractBright o;
		o.pos = UnityObjectToClipPos(v.vertex);
		o.uv = v.texcoord.xy;
		// 平台差异化处理
		#if UNITY_UV_STARTS_AT_TOP
		if (_MainTex_TexelSize.y < 0)
			o.uv.y = 1 - o.uv.y;
		#endif	
		return o;
	}
 
	// 提取亮部图像PS
	fixed4 fragExtractBright(v2fExtractBright i) : SV_Target
	{
		fixed4 color = tex2D(_MainTex, i.uv);
		float distFromLight = length(_ViewPortLightPos.xy - i.uv);
		float distanceControl = saturate(_LightRadius - distFromLight);
		// 仅当color大于设置的阈值的时候才输出
		float4 thresholdColor = saturate(color - _ColorThreshold) * distanceControl;
		float luminanceColor = Luminance(thresholdColor.rgb);
		luminanceColor = pow(luminanceColor, _PowFactor);
		return fixed4(luminanceColor, luminanceColor, luminanceColor, 1);
	}
 
	// 径向模糊VS
	v2fRadialBlur vertRadialBlur(appdata_img v)
	{
		v2fRadialBlur o;
		o.pos = UnityObjectToClipPos(v.vertex);
		o.uv = v.texcoord.xy;
		// 径向模糊采样偏移值*沿光的方向权重
		o.blurOffset = _offsets * (_ViewPortLightPos.xy - o.uv);
		return o;
	}
 
	// 径向模拟PS
	fixed4 fragRadialBlur(v2fRadialBlur i) : SV_Target
	{
		half4 color = half4(0,0,0,0);
		for(int j = 0; j < RADIAL_SAMPLE_COUNT; j++)   
		{	
			color += tex2D(_MainTex, i.uv.xy);
			i.uv.xy += i.blurOffset; 	
		}
		return color / RADIAL_SAMPLE_COUNT;
	}
 
	// 混合VS
	v2fGodRay vertGodRay(appdata_img v)
	{
		v2fGodRay o;
		o.pos = UnityObjectToClipPos(v.vertex);
		o.uv.xy = v.texcoord.xy;
		o.uv1.xy = o.uv.xy;
		#if UNITY_UV_STARTS_AT_TOP
		if (_MainTex_TexelSize.y < 0)
			o.uv.y = 1 - o.uv.y;
		#endif	
		return o;
	}

 	// 混合PS
	fixed4 fragGodRay(v2fGodRay i) : SV_Target
	{
		fixed4 ori = tex2D(_MainTex, i.uv1);
		fixed4 blur = tex2D(_BlurTex, i.uv);
		return ori + _LightFactor * blur * _LightColor;
	}
 
	ENDCG
 
	SubShader
	{
		ZTest Always Cull Off ZWrite Off

		// 提取高亮部分
		Pass
		{
			CGPROGRAM
			#pragma vertex vertExtractBright
			#pragma fragment fragExtractBright
			ENDCG
		}
 
		// 径向模糊
		Pass
		{
			CGPROGRAM
			#pragma vertex vertRadialBlur
			#pragma fragment fragRadialBlur
			ENDCG
		}
 
		// 将亮部图像与原图进行混合得到最终的GodRay效果
		Pass
		{
			CGPROGRAM
			#pragma vertex vertGodRay
			#pragma fragment fragGodRay
			ENDCG
		}
	}
}
