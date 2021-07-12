Shader "Unlit/TerrianDiffuse"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
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
            // make fog work
            #pragma multi_compile_fog

            #include "UnityCG.cginc"

            struct appdata
            {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
            };

            struct v2f
            {
                float2 uv : TEXCOORD0;
                UNITY_FOG_COORDS(1)
                float4 vertex : SV_POSITION;
                float4 worldPos : TEXCOORD2;

            };

            sampler2D _MainTex;
            float4 _MainTex_ST;

            float4x4 _LightMatrix;
            sampler2D _DepthTexture;

            float _TextureWidth;
            float _TextureHeight;

            float _Strength;
            float _Bias;


            v2f vert (appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                o.worldPos = mul(unity_ObjectToWorld,v.vertex);

                UNITY_TRANSFER_FOG(o,o.vertex);
                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                // sample the texture
                fixed4 col = tex2D(_MainTex, i.uv);

                fixed4 lightSpacePos = mul(_LightMatrix,i.worldPos);//变换到光源空间
                lightSpacePos.xyz = lightSpacePos.xyz / lightSpacePos.w;//剪裁空间为-1到1
                float3 uvPos = lightSpacePos * 0.5 + 0.5; //uv是在0-1之间
                
                float currentDepth = lightSpacePos.z;
                float2 offset = float2(1.0 / _TextureWidth,1.0 / _TextureHeight);
                float shadow = 0.0;
                //PCF
                for (int x=-1;x<=1;x++){
                    for (int y=-1;y<=1;y++){
                        fixed4 depthRGBA = tex2D(_DepthTexture,uvPos.xy + float2(x,y) * offset);
                        float depth = DecodeFloatRGBA(depthRGBA);
                        shadow += currentDepth + _Bias < depth ? 1.0 : _Strength;

                    }
                }

                //Discard border.
				float white = uvPos.x < 0.0 ? 1.0 : (uvPos.x > 1.0 ? 1.0 : (uvPos.y < 0.0 ? 1.0 : (uvPos.y > 1.0 ? 1.0 : 0.0)));
				if (white > 0.5) shadow = 1.f;
                
                shadow /= 9;
                col *= 1 - shadow;

                // apply fog
                UNITY_APPLY_FOG(i.fogCoord, col);
                return col;
            }
            ENDCG
        }
    }
}
