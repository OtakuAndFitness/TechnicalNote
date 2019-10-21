Shader "Unlit/GlowComposite"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
        [Toggle(_ISOUTLINE_ON)] _IsOutline ("Is Outline", int) = 0
    }
    SubShader
    {

        Pass
        {
            // Cull Off
            // ZWrite Off
            // ZTest Always
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #pragma multi_compile _ISOUTLINE_OFF _ISOUTLINE_ON
        
            #include "UnityCG.cginc"

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

            sampler2D _MainTex;
            float4 _MainTex_ST;
            sampler2D _PreTex;
            sampler2D _blurTex;
            fixed4 _GlowColor;
            float _Intensity;
            #if _ISOUTLINE_ON
		        float _Distance;
	        #endif

            v2f vert (appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                // sample the texture
                fixed4 col = tex2D(_MainTex, i.uv);

                #if _ISOUTLINE_ON
                    fixed glow = saturate(tex2D(_blurTex,i.uv) * _Distance - tex2D(_PreTex, i.uv));
                #else
                    fixed glow = saturate(tex2D(_PreTex,i.uv) + tex2D(_blurTex,i.uv));
                #endif

                return col + _GlowColor * _Intensity * glow;
            }
            ENDCG
        }
    }
}
