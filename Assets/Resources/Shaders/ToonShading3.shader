Shader "Unlit/ToonShading3"
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
		_TranslationX ("Translation X", Range(-1, 1)) = 0
		_TranslationY ("Translation Y", Range(-1, 1)) = 0
		_RotationX ("Rotation X", Range(-180, 180)) = 0
		_RotationY ("Rotation Y", Range(-180, 180)) = 0
		_RotationZ ("Rotation Z", Range(-180, 180)) = 0
		_ScaleX ("Scale X", Range(-1, 1)) = 0
		_ScaleY ("Scale Y", Range(-1, 1)) = 0
		_SplitX ("Split X", Range(0, 1)) = 0
		_SplitY ("Split Y", Range(0, 1)) = 0
		_SquareN ("Square N", Range(1, 10)) = 1
		_SquareScale ("Square Scale", Range(0, 1)) = 0

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
                // float4 color : COLOR;

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
            #include "AutoLight.cginc"

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
                float3 tangentNormal : TEXCOORD2;
				float3 tangentLightDir : TEXCOORD3;
				float3 tangentViewDir : TEXCOORD4;
				float3 worldPos : TEXCOORD5;
                SHADOW_COORDS(6)

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
			float _TranslationX;
			float _TranslationY;
			float _RotationX;
			float _RotationY;
			float _RotationZ;
			float _ScaleX;
			float _ScaleY;
			float _SplitX;
			float _SplitY;
			float _SquareN;
			fixed _SquareScale;

            v2f vert (appdata_tan v)
            {
                v2f o;
                o.pos = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.texcoord, _MainTex);
                TANGENT_SPACE_ROTATION;
                o.tangentNormal  = mul(rotation, v.normal);
				o.tangentLightDir = mul(rotation, ObjSpaceLightDir(v.vertex));
				o.tangentViewDir = mul(rotation, ObjSpaceViewDir(v.vertex));
                o.worldPos = mul(unity_ObjectToWorld,v.vertex).xyz;

                UNITY_TRANSFER_FOG(o,o.vertex);
                TRANSFER_SHADOW(o);

                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                // sample the texture
                fixed4 col = tex2D(_MainTex, i.uv);

                UNITY_LIGHT_ATTENUATION(atten, i, i.worldPos);

                fixed3 tangentNormal = normalize(i.tangentNormal);
				fixed3 tangentLightDir = normalize(i.tangentLightDir);
				fixed3 tangentViewDir = normalize(i.tangentViewDir);
				fixed3 halfVector = normalize(tangentViewDir + tangentLightDir);

                //缩放
                halfVector -= _ScaleX * halfVector.x * float3(1,0,0);
                halfVector = normalize(halfVector);
                halfVector -= _ScaleY * halfVector.y * float3(0,1,0);
                halfVector = normalize(halfVector);

                //旋转
                float xR = _RotationX * DegreeToRadian;
                float3x3 rotX = float3x3(1, 0, 0,
                                        0, cos(xR), sin(xR),
                                        0, -sin(xR), cos(xR));
                float yR = _RotationY * DegreeToRadian;
                float3x3 rotY = float3x3(cos(yR), 0, -sin(yR),
                                        0, 1, 0,
                                        sin(yR), 0, cos(yR));
                float zR = _RotationZ * DegreeToRadian;
                float3x3 rotZ = float3x3(cos(zR), sin(zR), 0,
                                        -sin(zR), cos(zR), 0,
                                        0, 0, 1);
                halfVector = mul(rotZ,mul(rotY,mul(rotZ,halfVector)));

                //平移
                halfVector += float3(_TranslationX,_TranslationY,0);
                halfVector = normalize(halfVector);

                //分块
                fixed signX = 1;
                if (halfVector.x < 0){
                    signX = -1;
                }
                fixed signY = 1;
                if (halfVector.y < 0){
                    signY = -1;
                }
                halfVector -= _SplitX * signX * float3(1,0,0) - _SplitY * signY * float3(0,1,0);
                halfVector = normalize(halfVector);

                //方块化
                float sqrThetaX = acos(halfVector.x);
				float sqrThetaY = acos(halfVector.y);
				fixed sqrnormX = sin(pow(2 * sqrThetaX, _SquareN));
				fixed sqrnormY = sin(pow(2 * sqrThetaY, _SquareN));
                fixed minority = min(sqrnormX,sqrnormY);
				halfVector -= _SquareScale * (minority * halfVector.x * fixed3(1, 0, 0) + minority * halfVector.y * fixed3(0, 1, 0));
				halfVector = normalize(halfVector);

                fixed4 ambient = UNITY_LIGHTMODEL_AMBIENT;

                fixed4 kd = _DiffuseCol * col;
                fixed4 k_blue = fixed4(0,0,_Blue,1);
                fixed4 k_yellow = fixed4(_Yellow,_Yellow,_Blue,1);
                fixed4 k_cool = k_blue + _Alpha * kd;
                fixed4 k_warm = k_yellow + _Beta * kd;

                fixed temp = dot(tangentLightDir,tangentNormal);
                fixed4 diffuse = (1 + temp)/2 * k_cool + (1 - (1+temp/2)) * k_warm;
                diffuse *= _LightColor0 * atten;

                fixed spec = saturate(dot(tangentNormal,halfVector));
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
