extern float DAT_00295C74;

void __declspec(naked) sub_000120D0(void)
{
    __asm {
        push ecx
        movss xmm0, dword ptr [DAT_00295C74]
        push esi
        movss dword ptr [esp + 4], xmm0
        mov esi, dword ptr [esp + 0Ch]
        movaps xmm0, xmmword ptr [esi]
        movaps xmm1, xmm0
        movaps xmm2, xmm0
        mulps xmm1, xmm2
        movaps xmm2, xmm1
        shufps xmm2, xmm2, 39h
        addss xmm1, xmm2
        shufps xmm2, xmm2, 39h
        addss xmm1, xmm2
        shufps xmm2, xmm2, 39h
        addss xmm1, xmm2
        sqrtss xmm1, xmm1
        movss xmm2, dword ptr [esp + 4]
        divss xmm2, xmm1
        shufps xmm2, xmm2, 0
        mulps xmm0, xmm2
        movaps xmmword ptr [esi], xmm0
        pop esi
        pop ecx
        ret 4
    }
}
