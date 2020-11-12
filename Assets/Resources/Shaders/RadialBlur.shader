Shader "Unlit/RadialBlur" 
{
	Properties 
	{
		_MainTex ("Base (RGB)", 2D) = "white" {}
		_Bias ("RGB Bias",Range(0,0.1)) = 0.1  
	}
 
	CGINCLUDE
	sampler2D _MainTex;
	float _BlurFactor;	//模糊强度（0-0.05）
	float4 _BlurCenter; //模糊中心点xy值（0-1）屏幕空间
	float _Bias;
	#include "UnityCG.cginc"
	#define SAMPLE_COUNT 6		//迭代次数
 
	fixed4 frag(v2f_img i) : SV_Target
	{
		//模糊方向为模糊中点指向边缘（当前像素点），而越边缘该值越大，越模糊
		float2 dir = i.uv - _BlurCenter.xy;
		float4 outColor = 0;
		//采样SAMPLE_COUNT次
		for (int j = 0; j < SAMPLE_COUNT; ++j)
		{
			//计算采样uv值：正常uv值+从中间向边缘逐渐增加的采样距离
			float2 uv = i.uv + _BlurFactor * dir * j;
			// outColor += tex2D(_MainTex, uv);
			outColor.r += tex2D(_MainTex, uv + _Bias.rr).r;
			outColor.g += tex2D(_MainTex, uv).b;
			outColor.b += tex2D(_MainTex, uv - _Bias.rr).g;

		}
		//取平均值
		outColor /= SAMPLE_COUNT;
		// outColor.r += _Bias;
		// outColor.b -= _Bias; 
		return outColor;
	}
	ENDCG
 
	SubShader
	{
		Pass
		{
			ZTest Always
			Cull Off
			ZWrite Off
			Fog{ Mode off }
 
			//调用CG函数	
			CGPROGRAM
			//使效率更高的编译宏
			#pragma fragmentoption ARB_precision_hint_fastest 
			//vert_img是在UnityCG.cginc中定义好的，当后处理vert阶段计算常规，可以直接使用自带的vert_img
			#pragma vertex vert_img
			#pragma fragment frag 
			ENDCG
		}
	}
	Fallback off
}