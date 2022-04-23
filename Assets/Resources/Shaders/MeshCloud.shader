Shader "Unlit/MeshCloud"
{
    Properties
    {
        _TopColor("TopColor",Color) = (1,1,1,1)
        _BottomColor("BottomColor",Color) = (1,1,1,1)

        _NoiseTex("NoiseTex", 2D) = "white" {}
        _NoiseScale("Noise Scale", Range(0.01,2)) = 1
        _Height("Height",float) = 1
        _Speed("Speed",float) = 1
        _DepthBiasFactor("DepthBiasFactor",float) =1
        _DcurvatureRadius("DcurvatureRadius",float) = 30
    }
    SubShader
    {
        Tags { "RenderType"="Transparent" "Queue" = "Transparent" "IgnoreProjector" = "True"}
        LOD 100
        
        ZWrite On
        ZTest On
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

            struct appdata
            {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
                float3 normal : NORMAL;

            };

            struct v2f
            {
                float2 uv : TEXCOORD0;
                float2 CloudUV01 : TEXCOORD2;
                float2 CloudUV02 : TEXCOORD3;
                float4 worldPos : TEXCOORD4;
                float2 noisePos:TEXCOORD5;
                float4 screenPos : TEXCOORD6;
                float3 worldNormal : TEXCOORD7;
                UNITY_FOG_COORDS(1)
                float4 vertex : SV_POSITION;
            };

            
            float4 _TopColor;
            float4 _BottomColor;
            sampler2D _NoiseTex;
            float _Height;
            float _Speed;
            float _DepthBiasFactor;
            sampler2D _CameraDepthTexture;
            float _DcurvatureRadius;
            float _NoiseScale;

            v2f vert (appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);

                 //用两个方向获取噪波图的运动
                o.CloudUV01 = v.uv + _Time.x * _Speed;
                o.CloudUV02 = v.uv - _Time.x *_Speed;
                o.noisePos.x = tex2Dlod(_NoiseTex, float4(o.CloudUV01,0,0)).r * _NoiseScale;
                o.noisePos.y = tex2Dlod(_NoiseTex, float4(o.CloudUV02,0,0)).r * _NoiseScale;
                o.worldPos = mul(unity_ObjectToWorld, v.vertex);
                o.worldNormal = mul(v.normal,(float3x3)unity_WorldToObject);

                //让云的Y轴扰动起来
                o.vertex.y += o.noisePos.x * o.noisePos.y * _Height;

                //以中心开始 将圆变成一个碗的形状，因为边缘太低，可能会露出一些不必要的场景。
                o.vertex.y -= pow(distance(float2(0,0), o.worldPos.xz) / _DcurvatureRadius, 3);

                o.screenPos = ComputeScreenPos(o.vertex);

                UNITY_TRANSFER_FOG(o,o.vertex);
                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                float3 worldNormal = normalize(i.worldNormal);
                float3 worldLight = normalize(_WorldSpaceLightPos0.xyz);

                //采样摄像机深度图
                float4 depthSample = SAMPLE_DEPTH_TEXTURE_PROJ(_CameraDepthTexture, i.screenPos);
                float depth = LinearEyeDepth(depthSample);
                float borderLine = saturate((depth - i.screenPos.w) / 2 - _DepthBiasFactor);

                //获取遮罩图
                float mask = saturate(i.noisePos.x * i.noisePos.y);

                //利用噪波图来融合顶底两个颜色
                float4 col = _TopColor * mask + _BottomColor * (1 - mask);
                
                //设置与物体交接的地方透明
                col.a = borderLine;

                //云层简单受光，blinnphong
                float3 diffuse = _LightColor0.rgb * col.rgb * (dot(worldNormal,worldLight) * 0.5 + 0.5);
                
                // apply fog
                UNITY_APPLY_FOG(i.fogCoord, diffuse);
                return float4(diffuse,col.a);
            }
            ENDCG
        }
    }
}
