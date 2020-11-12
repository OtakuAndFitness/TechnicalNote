Shader "Unlit/MotionVertex"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
        _Diffuse ("Diffuse", Color) = (1,0,0.65,1)
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

            #include "UnityCG.cginc"
            struct appdata
            {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
                float3 normal : NORMAL;
                // float vdoth : TEXCOORD1;
            };

            struct v2f
            {
                float2 uv : TEXCOORD0;
                float4 vertex : SV_POSITION;
                // float3 worldNormal : TEXCOORD2;
                float ndotd : TEXCOORD3;
                float vdoth : TEXCOORD4;
            };

            sampler2D _MainTex;
            float4 _MainTex_ST;
            float4 _Diffuse;
            float4 _Direction;

            float4 FresnelSchlick(float4 F0, float VdotH){
                return F0 + (1 - F0) * exp2(-5.55473 * VdotH - 6.98316 * VdotH);
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
                //o.worldNormal = UnityObjectToWorldNormal(v.normal);
                // o.worldNormal = wn;
                float3 viewDir = normalize(UnityWorldSpaceViewDir(worldVertex));
                float3 lightDir = normalize(UnityWorldSpaceLightDir(worldVertex));
                float3 halfDir = normalize(viewDir + lightDir);
                o.vdoth = max(0,dot(viewDir,halfDir));
                o.ndotd = ndotd;
                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                // sample the texture
                fixed4 col = tex2D(_MainTex, i.uv);
                col += i.ndotd * FresnelSchlick(_Diffuse,i.vdoth);
                
                return col;
            }
            ENDCG
        }
    }
}
