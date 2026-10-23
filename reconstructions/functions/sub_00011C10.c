void __declspec(naked) sub_00011C10(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0FFFFFFF0h
        sub esp, 10h
        movaps xmm1, xmmword ptr [eax]
        movaps xmm0, xmm1
        mulps xmm0, xmm1
        movaps xmm2, xmm0
        shufps xmm2, xmm0, 39h
        addss xmm0, xmm2
        movaps xmm3, xmm2
        shufps xmm3, xmm2, 39h
        addss xmm0, xmm3
        movaps xmmword ptr [esp], xmm0
        sqrtss xmm0, xmm0
        movss dword ptr [esp], xmm0
        movaps xmm0, xmmword ptr [esp]
        movaps xmm2, xmm0
        mov ecx, 02881C8h
        movss xmm0, dword ptr [ecx]
        shufps xmm0, xmm0, 0
        divss xmm0, xmm2
        movaps xmm2, xmm0
        shufps xmm2, xmm0, 0
        mulps xmm1, xmm2
        movaps xmmword ptr [eax], xmm1
        mov esp, ebp
        pop ebp
        ret
    }
}
