Shader "Unlit/Test1"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
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
                // float linearDepth : TEXCOORD1;
                float4 screenPos : TEXCOORD2;

            };

            sampler2D _MainTex;
            float4 _MainTex_ST;
            sampler2D _CameraDepthTexture;

            v2f vert (appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                o.screenPos = ComputeScreenPos(o.vertex);
                // o.linearDepth = -(UnityObjectToViewPos(v.vertex).z * _ProjectionParams.w);

                // UNITY_TRANSFER_FOG(o,o.vertex);
                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                // sample the texture
                fixed4 col = tex2D(_MainTex, i.uv);
                float2 texcoord = i.screenPos.xy / i.screenPos.w;
				float camDepth = SAMPLE_DEPTH_TEXTURE(_CameraDepthTexture, texcoord);
				camDepth = Linear01Depth (camDepth);
                
                // fixed4 c = fixed4(0,0,0,0);
                // float diff = saturate(i.linearDepth - camDepth);
                // if(diff < 0.001){
                col *= camDepth;
                // }

                return col;
                // return float4(camDepth, camDepth, camDepth, 1); // test camera depth value
                // return float4(i.linearDepth, i.linearDepth, i.linearDepth, 1); // test our depth
                // return float4(diff, diff, diff, 1); // test our depth
            }
            ENDCG
        }
    }
}
