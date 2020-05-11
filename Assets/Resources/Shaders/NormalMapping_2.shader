// Upgrade NOTE: replaced '_Object2World' with 'unity_ObjectToWorld'

Shader "Unlit/NormalMapping_2"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
        _NormalTex ("Normal", 2D) = "white"{}
        _NormalScale ("Normal Scale", Range(-2,2)) = 1
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
                float4 tangent : TANGENT;
                float3 normal : NORMAL;

            };

            struct v2f
            {
                float2 uv : TEXCOORD0;
                UNITY_FOG_COORDS(1)
                float2 texNormal : TEXCOORD2;
                float4 vertex : SV_POSITION;
                float4 TtoW0 : TEXCOORD3;
  				float4 TtoW1 : TEXCOORD4;
  				float4 TtoW2 : TEXCOORD5;
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
				
				float3 worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;
			  	fixed3 worldNormal = UnityObjectToWorldNormal(v.normal);
			  	fixed3 worldTangent = UnityObjectToWorldDir(v.tangent.xyz);
			  	fixed3 worldBinormal = cross(worldNormal, worldTangent) * v.tangent.w;
			  	o.TtoW0 = float4(worldTangent.x, worldBinormal.x, worldNormal.x, worldPos.x);
			  	o.TtoW1 = float4(worldTangent.y, worldBinormal.y, worldNormal.y, worldPos.y);
			  	o.TtoW2 = float4(worldTangent.z, worldBinormal.z, worldNormal.z, worldPos.z);


                UNITY_TRANSFER_FOG(o,o.vertex);
                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                // sample the texture
                fixed4 col = tex2D(_MainTex, i.uv);
                float3 worldPos = float3(i.TtoW0.w, i.TtoW1.w, i.TtoW2.w);
				float3 lightDir = normalize(UnityWorldSpaceLightDir(worldPos));

                float3 normal = UnpackNormal(tex2D(_NormalTex, i.texNormal));
                normal.xy *= _NormalScale;
                normal.z = 1 - saturate(sqrt(dot(normal.xy,normal.xy)));
                float3 worldNormal = normalize(float3(dot(i.TtoW0.xyz, normal), dot(i.TtoW1.xyz, normal), dot(i.TtoW2.xyz, normal)));

                float3 ambientLight = UNITY_LIGHTMODEL_AMBIENT.rgb;
                
                float3 diffuseLight = _LightColor0.rgb * saturate(dot(lightDir.xyz,worldNormal));

                float4 finalCol = float4((ambientLight + diffuseLight) * col.rgb,col.a);

                // apply fog
                UNITY_APPLY_FOG(i.fogCoord, finalCol);
                return finalCol;
            }
            ENDCG
        }
    }
}
