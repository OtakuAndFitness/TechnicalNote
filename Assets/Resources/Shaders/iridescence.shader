Shader"Custom/Iridensence"{
    Properties{
        _Metallic("Metallic",Range( 0 , 1)) = 1
        _ContrastMask1("ContrastMask1",Color) = (0,0,1,1)
        _Smoothness("Smoothness",Range( 0 , 1)) = 1
        _Tile("Tile",Float) = 1
        _MainTex("MainTex",2D) = "white" {}
        _MainColor("MainColor",Color) = (1,1,1,0)
        _MaskRgb("MaskRgb",Color) = (1,1,1,0)}
    SubShader{
        Tags{ "RenderType"="Opaque" }
        
        CGPROGRAM
        #pragma surface surf Standard fullforwardshadows
        #pragma target 3.0

        sampler2D _MainTex;

        struct Input{
            float2 uv_MainTex;
            float3 worldNormal;
        };

        half _Smoothness;
        half _Metallic;
        half _Tile;
        half4 _MainColor;
        half4 _MaskRgb;
        half4 _ContrastMask1;

        void surf (Input IN, inout SurfaceOutputStandard o)
        {
            half3 WorldNormal = normalize (IN.worldNormal);
            half3 CameraPos = _WorldSpaceCameraPos * _Tile;
            half3 DotPostion = dot(CameraPos,WorldNormal);
            half3 Mask01 = saturate(cos(DotPostion) * _ContrastMask1.rgb);
            half3 CrossColor = cross(_ContrastMask1.rgb , float4(1,1,1,1));
            half3 Mask02 = saturate(sin (DotPostion) * CrossColor);
            half3 AddMask = Mask01 + Mask02;
            half RGBToGray = saturate( 0.2989 * AddMask.r + 0.587 * AddMask.g + 0.114 * AddMask.b);
            half4 c = tex2D(_MainTex, IN.uv_MainTex) * _MaskRgb;
            half3 FinalColor = lerp(c, _MainColor, RGBToGray);
            o.Albedo = FinalColor.rgb;
            o.Metallic = _Metallic;
            o.Smoothness = _Smoothness;
            o.Alpha = 1;
        }
        ENDCG
    }
    FallBack"Diffuse"
}