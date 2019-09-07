Shader "Unlit/NormalMapping_2"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
        _NormalTex ("Normal", 2D) = "white"{}
        _NormalScale ("Normal Scale", Range(0,2)) = 1
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

            #include "Lighting.cginc"
            #include "UnityCG.cginc"

            struct appdata
            {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
                float4 tan : TANGENT;
                float3 normal : NORMAL;

            };

            struct v2f
            {
                float2 uv : TEXCOORD0;
                UNITY_FOG_COORDS(1)
                float3 lightDirection : TEXCOORD2;
                float2 texNormal : TEXCOORD3;
                float4 vertex : SV_POSITION;
            };

            sampler2D _MainTex;
            float4 _MainTex_ST;
            sampler2D _NormalTex;
            float4 _NormalTex_ST;
            float _NormalScale;

            v2f vert (appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                o.texNormal = TRANSFORM_TEX(v.uv,_NormalTex);

                float3 binormal = cross(v.tan.xyz,v.normal) * v.tan.w;
                float3x3 rotation = float3x3(v.tan.xyz,binormal,v.normal);
                float3 ld = mul(unity_WorldToObject, _WorldSpaceLightPos0.xyz);
                o.lightDirection = mul(rotation, ld);


                UNITY_TRANSFER_FOG(o,o.vertex);
                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                // sample the texture
                fixed4 col = tex2D(_MainTex, i.uv);

                float3 normal = UnpackNormal(tex2D(_NormalTex, i.texNormal));
                normal.xy *= _NormalScale;
                normal.z = 1 - saturate(sqrt(dot(normal.xy,normal.xy)));

                float3 ambientLight = UNITY_LIGHTMODEL_AMBIENT.rgb;
                
                float3 diffuseLight = _LightColor0.rgb * saturate(dot(i.lightDirection.xyz,normal));

                float4 finalCol = float4((ambientLight + diffuseLight) * col.rgb,col.a);

                // apply fog
                UNITY_APPLY_FOG(i.fogCoord, finalCol);
                return finalCol;
            }
            ENDCG
        }
    }
}
