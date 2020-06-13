Shader "Unlit/ShadowMap"
{
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

            struct appdata
            {
                float4 vertex : POSITION;
            };

            struct v2f
            {
                float4 vertex : SV_POSITION;
                float2 depth : TEXCOORD0;
            };


            v2f vert (appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.depth = o.vertex.zw;
                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                float depth = i.depth.x / i.depth.y;
                fixed4 col = EncodeFloatRGBA(depth);
                return col;
            }
            ENDCG
        }
    }
}
