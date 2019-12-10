//公式出自https://cdn2-unrealengine-1251447533.file.myqcloud.com/Resources/files/2013SiggraphPresentationsNotes-26915738.pdf

#define MINNUM 0.000001

inline float pow2(float res){
    return res * res;
}

inline float pow5(float res){
    return pow2(res) * pow2(res) * res;
}

//Specular D, normal distribution function, α = roughtness^2
float GGX(float NdotH, float r_2){
    float alpha_2 = pow2(r_2);
    float res = alpha_2 / (UNITY_PI * pow2(pow2(NdotH) * (alpha_2 - 1) + 1) + MINNUM);//加个非常小的数以防是0
    return res;
}

//Specular G，Geometry Term
float SmithJoint(float NdotL, float NdotV,float r){
    float k = pow2(r+1) / 8;
    float g1 = NdotV / (NdotV * (1 - k) + k);
    float g2 = NdotL * (NdotL * (1 - k) + k);
    return g1 * g2;
}
//Specular F, Fresnel Term
float4 FresnelSchlick(float4 F0, float VdotH){
    return F0 + (1 - F0) * exp2(-5.55473 * VdotH - 6.98316 * VdotH);
}

float4 FresnelLerp(float4 F0,float4 F90, float cosA){
    float t = pow5(1 - cosA);
    return lerp(F0,F90,t);
}

float4 CookTorranceBRDF(float NdotH,float NdotL,float NdotV,float VdotH,float roughness,float4 specularColor){
    float D = GGX(NdotH,pow2(roughness));
    float G = SmithJoint(NdotL,NdotV,roughness);
    float4 F = FresnelSchlick(specularColor,VdotH);
    float4 res = (D * G * F) / (4 * NdotL * NdotV + MINNUM);
    return res;
}




