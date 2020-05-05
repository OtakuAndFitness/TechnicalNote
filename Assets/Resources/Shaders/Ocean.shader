Shader "Unlit/Ocean"
{
    Properties
    {
        _Color("Main Color",Color) = (1,1,1,1)
        // _HeightTex("Height Texture",2D) = "white"{}
        _DisplaceTex("Displacement Texture",2D) = "white"{}
        _NormalTex("Normal Texture",2D) = "bump"{}
        _BubbleTex("Bubble Texture",2D) = "white"{}
        _LightWrap ("Light Wrapping Value", Float) = 1 
		_SpecularColor ("Specular Color", Color) = (1, 0.25, 0, 1)
		_Glossiness ("Glossiness", Float) = 64


    }
    SubShader
    {
        Tags { "RenderType"="Opaque" "LightMode" = "ForwardBase"}
        LOD 100

        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag

            #include "UnityCG.cginc"
            #include "Lighting.cginc"

            struct appdata
            {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
                // float2 uvHeight : TEXCOORD0;
                // float2 uvDisplace : TEXCOORD1;
                // float2 uvBubble : TEXCOORD2;
                // float2 uvNormal : TEXCOORD3;
            };

            struct v2f
            {
                float2 uv : TEXCOORD0;
                // float2 uvHeight : TEXCOORD0;
                // float2 uvDisplace : TEXCOORD3;
                // float2 uvBubble : TEXCOORD4;
                // float2 uvNormal : TEXCOORD5;

                float4 vertex : SV_POSITION;
                // float4 color : TEXCOORD1;
                float4 posWorld : TEXCOORD2;
            };

            // sampler2D _HeightTex;
            // float4 _HeightTex_ST;
            sampler2D _DisplaceTex;
            float4 _DisplaceTex_ST;
            sampler2D _NormalTex;
            // float4 _NormalTex_ST;
            sampler2D _BubbleTex;
            // float4 _BubbleTex_ST;
            float4 _Color;
            float _LightWrap;
            float4 _SpecularColor;
            float _Glossiness;


            v2f vert (appdata v)
            {
                v2f o;

                o.uv = TRANSFORM_TEX(v.uv, _DisplaceTex);
                // o.uvHeight = TRANSFORM_TEX(v.uvHeight,_HeightTex);
                // o.uvDisplace = TRANSFORM_TEX(v.uv,_DisplaceTex);
                // o.uvBubble = TRANSFORM_TEX(v.uv,_BubbleTex);
                // o.uvNormal = TRANSFORM_TEX(v.uv,_NormalTex);

                float4 pos = v.vertex;
                // pos.y += tex2Dlod(_HeightTex,float4(v.uvHeight,0,0)).r + tex2Dlod(_HeightTex,float4(v.uvHeight,0,0)).b;
                float4 displace = tex2Dlod(_DisplaceTex,float4(v.uv,0,0));
                pos += displace;
                o.vertex = UnityObjectToClipPos(pos);
                o.posWorld = mul(unity_ObjectToWorld,pos);

                // o.color = tex2Dlod(_BubbleTex,float4(v.uvBubble,0,0)).r;
                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                float bubble = tex2Dlod(_BubbleTex,float4(i.uv,0,0)).r;
                
                float3 normal = normalize(UnityObjectToWorldNormal(tex2Dlod(_NormalTex, float4(i.uv,0,0)).rgb));

				// float3 lightDir = normalize(lerp(_WorldSpaceLightPos0.xyz, _WorldSpaceLightPos0.xyz - i.posWorld.xyz, _WorldSpaceLightPos0.w));
				float3 lightDir = normalize(_WorldSpaceLightPos0.xyz - i.posWorld.xyz);

                float3 view = normalize(_WorldSpaceCameraPos.xyz - i.posWorld.xyz);

                float4 diffuse = saturate(dot(normal, lightDir));
				diffuse = pow(saturate(diffuse * (1 - _LightWrap) + _LightWrap), 2 * _LightWrap + 1) * _Color * _LightColor0;

				float3 H = normalize(view + lightDir);
				float NdotH = saturate(dot(normal, H));
				float4 specular = _SpecularColor * saturate(pow(NdotH, _Glossiness)) * _LightColor0;

				// float4 rim = _RimColor * pow(max(0, 1 - saturate(dot(normal, view))), 1.5);

				float4 white = saturate(pow(bubble / 2, 2));

				return diffuse;// + specular + white;
            }
            ENDCG
        }
    }
}
