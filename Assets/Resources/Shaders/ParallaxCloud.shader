Shader "Unlit/ParallaxCloud"
{
    Properties
    {
        _Color("Color", Color) = (1,1,1,1)
        _BottomColor("Bottom Color", Color) = (1,1,1,1)
        _MainTex ("Noise Texture", 2D) = "white" {}
        _NormalTex("Normal Texture", 2D) = "white" {}
        _NormalScale("Normal Scale", Range(0,0.2)) = 0.1
        _Alpha("Alpha", Range(0,1)) = 0.5
        _HeightOffset("Height Offset", Range(0,1)) = 0.5
        _StepLayer("Step Layer", Range(2,64)) = 16
        _ViewOffset("View Offset", Float) = 1
        _Speed("Cloud Speed", Range(0,0.2)) = 0.1
    }
    SubShader
    {
        Tags { "RenderType"="Transparent" "Queue" = "Transparent-50" "IgnoreProjector" = "True" }
        LOD 100
        
        Cull Off
        Blend SrcAlpha OneMinusSrcAlpha

        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            // make fog work
            #pragma multi_compile_fog

            #include "UnityCG.cginc"
            #include "Lighting.cginc"

            struct v2f
            {
                float2 uv : TEXCOORD0;
                float2 uv2 : TEXCOORD2;
                float4 posWorld : TEXCOORD3;
                float3 normalDir : TEXCOORD4;
                float3 viewDir : TEXCOORD5;
                float3 color : TEXCOORD6;
                float3 lightDirection : TEXCOORD7;
                UNITY_FOG_COORDS(1)
                float4 vertex : SV_POSITION;
            };

            sampler2D _MainTex;
            float4 _MainTex_ST;
            float4 _Color;
            float _Alpha;
            float _HeightOffset;
            float _StepLayer;
            float _ViewOffset;

            sampler2D _NormalTex;
            float4 _NormalTex_ST;
            float _NormalScale;

            float4 _BottomColor;
            float _Speed;

            v2f vert (appdata_full v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.texcoord, _MainTex) + float2(frac(_Time.y * _Speed),0);
                o.uv2 = v.texcoord;
                o.posWorld = mul(unity_ObjectToWorld, v.vertex);
                o.normalDir = UnityObjectToWorldNormal(v.normal);
                TANGENT_SPACE_ROTATION;
                o.viewDir = mul(rotation, ObjSpaceViewDir(v.vertex));
                o.color = v.color;

                // o.texNormal = TRANSFORM_TEX(v.texcoord, _NormalTex) + float2(frac(_Time.y * 0.1),0);
                float3 ld = mul(unity_WorldToObject, _WorldSpaceLightPos0.xyz);
                o.lightDirection = mul(rotation, ld);
                
                UNITY_TRANSFER_FOG(o,o.vertex);
                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                float3 normal = UnpackNormal(tex2D(_NormalTex, i.uv));
                normal.xy *= _NormalScale;
                normal.z = 1 - saturate(sqrt(dot(normal.xy,normal.xy)));
                
                float3 viewDir = normalize(i.viewDir);
                viewDir.xy *= _HeightOffset;
                viewDir.z += _ViewOffset;
                float3 uv = float3(i.uv, 0);
                float3 uv2 = float3(i.uv2, 0);
                
                // sample the texture
                fixed4 col = tex2D(_MainTex, uv2.xy);

                float3 minOffset = viewDir / (viewDir.z * _StepLayer);
                float finiNoise = tex2D(_MainTex, uv.xy).r * col.r;
                float3 prev_uv = uv;
                
                [unroll(100)] 
                while(finiNoise > uv.z)
                {
                    uv += minOffset;
                    finiNoise = tex2Dlod(_MainTex, float4(uv.xy,0,0)).r * col.r;
                }

                float d1 = finiNoise - uv.z;
                float d2 = finiNoise - prev_uv.z;
                float w = d1 / (d1 - d2 + 0.000001);
                uv = lerp(uv, prev_uv, w);
                half4 resultColor = tex2D(_MainTex, uv.xy) * col;

                half rangeClt = col.a * resultColor.r + _Alpha * 0.75;
                half alpha = abs(smoothstep(rangeClt, _Alpha, 1.0));
                alpha = pow(alpha,5);
                half4 res = float4(lerp(_BottomColor.rgb, _Color.rgb, resultColor.rgb), alpha);

                float3 diffuseLight = _LightColor0.rgb * saturate(dot(i.lightDirection.xyz,normal));
                res.rgb *= diffuseLight;
                
                // apply fog
                UNITY_APPLY_FOG(i.fogCoord, res);
                return res;
            }
            ENDCG
        }
    }
}
