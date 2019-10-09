Shader "Unlit/TextureChange"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
        _SecondTex ("Second Texture", 2D) = "white"{}
        _NoiseTex("Noise Texture", 2D) = "white"{}
        _RampTex ("Ramp Texture", 2D) = "white"{}
        _Offset ("Offset", Range(0,1)) = 1
        _EdgeLength ("Edge Length", Range(0,0.2)) = 0.1
        _Curve ("Curve Extent", Range(0,1)) = 0.88
        _Max ("Max", Range(-1,1)) = 1
        _Min ("Min", Range(-1,1)) = -1
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
                float2 uv1 : TEXCOORD1;
                float2 uvNoise : TEXCOORD2;
            };

            struct v2f
            {
                float2 uv : TEXCOORD0;
                float2 uv1 : TEXCOORD3;
                float2 uvNoise : TEXCOORD4;
                UNITY_FOG_COORDS(1)
                float4 vertex : SV_POSITION;
                fixed pos : TEXCOORD2;
            };

            sampler2D _MainTex;
            float4 _MainTex_ST;
            sampler2D _SecondTex;
            float4 _SecondTex_ST;
            sampler2D _NoiseTex;
            float4 _NoiseTex_ST;
            sampler2D _RampTex;
            float4 _RampTex_ST;
            float _Offset;
            float _EdgeLength;
            float _Curve;
            float _Max;
            float _Min;

            v2f vert (appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                o.uv1 = TRANSFORM_TEX(v.uv1,_SecondTex);
                o.uvNoise = TRANSFORM_TEX(v.uvNoise,_NoiseTex);
                o.pos = v.vertex.y;
                UNITY_TRANSFER_FOG(o,o.vertex);
                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                // sample the texture
                fixed4 c1 = tex2D(_MainTex, i.uv);
                fixed4 c2 = tex2D(_SecondTex, i.uv1);

                fixed4 noise = tex2D(_NoiseTex,i.uvNoise);

                fixed range = _Max - _Min;
                fixed dist =  i.pos - _Min;
                fixed normalizeDist = saturate(dist / range);
                fixed param = noise.r * (1 - _Curve) + normalizeDist * _Curve;

                fixed degree = saturate((param - _Offset) / _EdgeLength);
                fixed4 ramp = tex2D(_RampTex,fixed2(degree,degree));

                fixed4 col = lerp(c1,c2*ramp,degree);

                // apply fog
                UNITY_APPLY_FOG(i.fogCoord, col);
                return col;
            }
            ENDCG
        }
    }
}
