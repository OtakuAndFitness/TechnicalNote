Shader "Unlit/VertexMotionBlur"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
        _Diffuse ("Diffuse", Color) = (1,1,1,1)
        _fresnelBase("fresnelBase", Range(0, 1)) = 1
        _fresnelScale("fresnelScale", Range(0, 1)) = 1
        _fresnelIndensity("fresnelIndensity", Range(0, 5)) = 5
        _fresnelCol("_fresnelCol", Color) = (1,1,1,1)
        _Direction ("Direction", Vector) = (0,0,0,1)
    }
    SubShader
    {
        Tags { "RenderType"="Opaque" "LightingMode" = "ForwardBase"}
        LOD 100

        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            // make fog work
            #pragma multi_compile_fog

            #include "UnityCG.cginc"
            #include "Lighting.cginc"
            struct appdata
            {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
                float3 normal : NORMAL;
            };

            struct v2f
            {
                float2 uv : TEXCOORD0;
                UNITY_FOG_COORDS(1)
                float4 vertex : SV_POSITION;
                float ndotd : TEXCOORD2;
                float ndotv : TEXCOORD3;
            };

            sampler2D _MainTex;
            float4 _MainTex_ST;
            float4 _Diffuse;
            float4 _Direction;
            float _fresnelBase;

            float _fresnelScale;

            float _fresnelIndensity;

            float4 _fresnelCol;

            float Fresnel(float ndotv){
                return _fresnelBase + _fresnelScale * pow(1 - ndotv, _fresnelIndensity);
            }

            v2f vert (appdata v)
            {
                v2f o;
                float4 worldVertex = mul(unity_ObjectToWorld,v.vertex);
                float3 wn = UnityObjectToWorldNormal(v.normal);
                float ndotd = max(0,dot(wn,_Direction));
                float noise = frac(sin(dot(v.uv.xy, float2(12.9898, 78.233))) * 43758.5453);
                worldVertex.xyz += _Direction.xyz * _Direction.w * noise * ndotd;
                o.vertex = mul(UNITY_MATRIX_VP,worldVertex);
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                o.ndotd = ndotd;
                float3 viewDir = normalize(UnityWorldSpaceViewDir(worldVertex));
                o.ndotv = max(0,dot(viewDir,normalize(wn)));
                UNITY_TRANSFER_FOG(o,o.vertex);
                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                // sample the texture
                fixed4 col = tex2D(_MainTex, i.uv);
                col += _Diffuse * i.ndotd; 
                col = lerp(col, _fresnelCol,Fresnel(i.ndotv));
                // apply fog
                UNITY_APPLY_FOG(i.fogCoord, col);
                return col;
            }
            ENDCG
        }
    }
}
