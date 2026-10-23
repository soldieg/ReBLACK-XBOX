extern float DAT_00295DF0;
extern float DAT_00295E4C;
extern float DAT_00295E34;
extern float DAT_00295C9C;

void __declspec(naked) sub_000118A0(void)
{
    __asm {
        xorps xmm1, xmm1
        comiss xmm1, xmm2
        movss xmm3, dword ptr [DAT_00295DF0]
        jbe nonnegative
        movaps xmm0, xmm1
        subss xmm0, xmm2
        movaps xmm2, xmm0
        mulss xmm2, dword ptr [DAT_00295E4C]
        cvttss2si eax, xmm2
        cvtsi2ss xmm2, eax
        mulss xmm2, xmm3
        subss xmm0, xmm2
        subss xmm1, xmm0
        movaps xmm0, xmm1
        jmp normalized
    nonnegative:
        movaps xmm0, xmm2
        mulss xmm0, dword ptr [DAT_00295E4C]
        cvttss2si ecx, xmm0
        cvtsi2ss xmm0, ecx
        mulss xmm0, xmm3
        subss xmm2, xmm0
        movaps xmm0, xmm2
    normalized:
        movss xmm1, dword ptr [DAT_00295E34]
        comiss xmm1, xmm0
        jbe upper_check
        addss xmm0, xmm3
        ret
    upper_check:
        comiss xmm0, dword ptr [DAT_00295C9C]
        jbe return_value
        subss xmm0, xmm3
    return_value:
        ret
    }
}
