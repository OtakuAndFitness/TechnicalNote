Shader "Unlit/BlinnPhong"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
        _SpecularTex ("Specular Texture",2D) = "white"{}
        _Diffuse ("Diffuse", Color) = (1,1,1,1)
        _Specular ("Specualr", Color) = (1,1,1,1)
        _SpecularScale("SpecularScale", Range(0.0, 5.0)) = 1.0
        _Gloss ("Gloss", Range(0,20)) = 20
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
                float3 worldNormal : TEXCOORD2;
                float3 worldPos : TEXCOORD3;
            };

            sampler2D _MainTex;
            float4 _MainTex_ST;
            sampler2D _SpecularTex;
            float4 _SpecularTex_ST;
            float4 _Diffuse;
            float4 _Specular;
            float _SpecularScale;
            float _Gloss;

            v2f vert (appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                //o.worldNormal = UnityObjectToWorldNormal(v.normal);
                o.worldNormal = mul(v.normal,(float3x3)unity_WorldToObject);
                o.worldPos = mul(unity_ObjectToWorld,v.vertex).xyz;
                UNITY_TRANSFER_FOG(o,o.vertex);
                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                // sample the texture
                fixed4 col = tex2D(_MainTex, i.uv);
                float3 spec = tex2D(_SpecularTex,i.uv);
                float3 normal = normalize(i.worldNormal);
                float3 worldLight = normalize(_WorldSpaceLightPos0.xyz);
                //ambient
                float3 ambient = UNITY_LIGHTMODEL_AMBIENT.xyz;
                //diffuse
                float3 diffuse = _LightColor0.rgb * _Diffuse.rgb * (dot(normal,worldLight) * 0.5 + 0.5);
                //specular
                float3 viewDir = normalize(_WorldSpaceCameraPos.xyz - i.worldPos);
                float3 halfDir = normalize(viewDir + worldLight);
                float3 specular = _LightColor0.rgb * _Specular.rgb * pow(saturate(dot(halfDir,normal)),_Gloss);
                
                float4 finalCol = float4((ambient + diffuse + specular * spec * _SpecularScale) * col.rgb,1);
                // apply fog
                UNITY_APPLY_FOG(i.fogCoord, finalCol);
                return finalCol;
            }
            ENDCG
        }
    }
}
