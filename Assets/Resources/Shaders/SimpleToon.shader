Shader "Unlit/SimpleToon"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
        _Outline ("Outline Width", Range(0,1)) = 0.1
        _OutlineCol ("Outline Color", Color) = (0,0,0,1)
        _OutlineScale ("Outline Scale",Range(0,1)) = 1
        _DiffuseCol ("Diffuse Color", Color) = (1,1,1,1)
        _Blue ("Cool Color",Range(0,1)) = 1
        _Yellow ("Warm Color",Range(0,1)) = 1
        _Alpha ("Alpha Parameter",Range(0,1)) = 0.5
        _Beta ("Beta Parameter",Range(0,1)) = 0.5 
        _SpecularCol ("Specular Color", Color) = (1,1,1,1)
        _SpecularScale ("Specular Scale", Range(0, 0.05)) = 0.01

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
            float _OutlineScale;

            v2f vert (appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                float3 normal = mul((float3x3)UNITY_MATRIX_IT_MV, v.normal); 
                normal.z = 0.01;
                float2 offset = TransformViewToProjection(normal.xy);
                float height = o.vertex.z / unity_CameraProjection._m11;//加入这个参数可让物体描边在离摄像头远的时候不至于太细，近的时候不至于太粗
                float scale = sqrt(height / _OutlineScale);
                o.vertex.xy += offset * scale * _Outline;
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

            #define DegreeToRadian 0.01745329 //这个数是由3.141592654f/180.0f得出

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
                float3 worldNormal : TEXCOORD2;
				float3 worldLightDir : TEXCOORD3;
				float3 worldViewDir : TEXCOORD4;

            };

            sampler2D _MainTex;
            float4 _MainTex_ST;
            fixed4 _DiffuseCol;
            fixed4 _SpecularCol;
            float _Blue;
            float _Yellow;
            float _Alpha;
            float _Beta;
            fixed _SpecularScale;

            v2f vert (appdata v)
            {
                v2f o;
                o.pos = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                
                o.worldNormal  = UnityObjectToWorldNormal(v.normal);
				o.worldLightDir = WorldSpaceLightDir(v.vertex);
				o.worldViewDir = WorldSpaceViewDir(v.vertex);

                UNITY_TRANSFER_FOG(o,o.vertex);

                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                // sample the texture
                fixed4 col = tex2D(_MainTex, i.uv);

                fixed3 worldNormal = normalize(i.worldNormal);
				fixed3 worldLightDir = normalize(i.worldLightDir);
				fixed3 worldViewDir = normalize(i.worldViewDir);
				fixed3 halfVector = normalize(worldViewDir + worldLightDir);

                fixed4 ambient = UNITY_LIGHTMODEL_AMBIENT;

                fixed4 kd = _DiffuseCol * col;
                fixed4 k_blue = fixed4(0,0,_Blue,1);
                fixed4 k_yellow = fixed4(_Yellow,_Yellow,_Blue,1);
                fixed4 k_cool = k_blue + _Alpha * kd;
                fixed4 k_warm = k_yellow + _Beta * kd;

                fixed temp = dot(worldLightDir,worldNormal);
                fixed4 diffuse = (1 + temp)/2 * k_cool + (1 - (1+temp/2)) * k_warm;
                diffuse *= _DiffuseCol * _LightColor0;

                fixed spec = saturate(dot(worldNormal,halfVector));
                fixed w = fwidth(spec);
                fixed4 specular = lerp(fixed4(0,0,0,0),_SpecularCol * _LightColor0,smoothstep(-w,w,spec + _SpecularScale - 1));

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
