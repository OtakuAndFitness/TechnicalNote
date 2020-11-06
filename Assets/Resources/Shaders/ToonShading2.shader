Shader "Unlit/ToonShading2"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
        _Outline ("Outline Width", Range(0,1)) = 0.1
        _OutlineCol ("Outline Color", Color) = (0,0,0,1)
        _DiffuseCol ("Diffuse Color", Color) = (1,1,1,1)
        _Blue ("Cool Color",Range(0,1)) = 1
        _Yellow ("Warm Color",Range(0,1)) = 1
        _Alpha ("Alpha Parameter",Range(0,1)) = 0.5
        _Beta ("Beta Parameter",Range(0,1)) = 0.5 
        _Gloss ("Gloss",Range(1,500)) = 40
        _SpecularCol ("Specular Color", Color) = (1,1,1,1)

    }
    SubShader
    {
        Tags { "RenderType"="Opaque" }
        LOD 100

        Pass
        {
            Cull Front

            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag

            #include "UnityCG.cginc"

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
                float4 color : COLOR;

            };

            float _Outline;
            fixed4 _OutlineCol;

            v2f vert (appdata v)
            {
                v2f o;
                float4 pos = mul(UNITY_MATRIX_MV, v.vertex);
                float3 normal = mul((float3x3)UNITY_MATRIX_IT_MV, v.normal); 
                normal.z = 0.01;
                pos += float4(normalize(normal), 0)  * _Outline;
                o.vertex = mul(UNITY_MATRIX_P, pos);
                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {  
                return _OutlineCol;
            }
            ENDCG
        }

        Pass
        {
            Tags{"LightMode"="ForwardBase"}
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            // make fog work
            #pragma multi_compile_fog
            #pragma multi_compile_fwdbase

            #include "UnityCG.cginc"
            #include "Lighting.cginc"
            #include "AutoLight.cginc"

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
                float4 pos : SV_POSITION;
                float3 worldPos : TEXCOORD2;
                float3 worldNormal : TEXCOORD3;
                SHADOW_COORDS(4)

            };

            sampler2D _MainTex;
            float4 _MainTex_ST;
            fixed4 _DiffuseCol;
            float _Gloss;
            fixed4 _SpecularCol;
            float _Blue;
            float _Yellow;
            float _Alpha;
            float _Beta;

            v2f vert (appdata v)
            {
                v2f o;
                o.pos = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                o.worldPos = mul(unity_ObjectToWorld,v.vertex).xyz;
                o.worldNormal = UnityObjectToWorldNormal(v.normal);
                UNITY_TRANSFER_FOG(o,o.vertex);
                TRANSFER_SHADOW(o);

                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                // sample the texture
                fixed4 col = tex2D(_MainTex, i.uv);

                UNITY_LIGHT_ATTENUATION(atten, i, i.worldPos);

                float3 worldNormal = normalize(i.worldNormal);
                float3 worldView = UnityWorldSpaceViewDir(i.worldPos);
                float3 worldLight = UnityWorldSpaceLightDir(i.worldPos);
                float3 halfVector = normalize(worldLight + worldView);

                fixed4 ambient = UNITY_LIGHTMODEL_AMBIENT;

                fixed4 kd = _DiffuseCol * col;
                fixed4 k_blue = fixed4(0,0,_Blue,1);
                fixed4 k_yellow = fixed4(_Yellow,_Yellow,0,1);
                fixed4 k_cool = k_blue + _Alpha * kd;
                fixed4 k_warm = k_yellow + _Beta * kd;

                fixed temp = dot(normalize(worldLight),worldNormal);
                fixed4 diffuse = (1 + temp)/2 * k_cool + (1 - (1+temp/2)) * k_warm;
                diffuse *= _LightColor0 * atten;
                fixed4 specular = pow(saturate(dot(worldNormal,halfVector)),_Gloss);
                specular *= _SpecularCol * _LightColor0;

                fixed4 finalCol = ambient + diffuse + specular;

                // apply fog
                UNITY_APPLY_FOG(i.fogCoord, finalCol);
                return finalCol;
            }
            ENDCG
        }
    }
    Fallback "Diffuse"
}
