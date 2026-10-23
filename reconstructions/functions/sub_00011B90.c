void __declspec(naked) sub_00011B90(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0FFFFFFF0h
        sub esp, 20h
        movaps xmm1, xmmword ptr [eax]
        xorps xmm0, xmm0
        movss dword ptr [esp + 0Ch], xmm0
        movaps xmm0, xmm1
        mulps xmm0, xmm1
        movaps xmm2, xmm0
        shufps xmm2, xmm0, 39h
        addss xmm0, xmm2
        movaps xmm3, xmm2
        shufps xmm3, xmm2, 39h
        addss xmm0, xmm3
        movaps xmmword ptr [esp + 10h], xmm0
        sqrtss xmm0, xmm0
        movss dword ptr [esp + 10h], xmm0
        movaps xmm2, xmmword ptr [esp + 10h]
        mov edx, 02881C8h
        movss xmm0, dword ptr [edx]
        lea ecx, [esp + 0Ch]
        movss dword ptr [ecx], xmm2
        shufps xmm0, xmm0, 0
        divss xmm0, xmm2
        movaps xmm2, xmm0
        shufps xmm2, xmm0, 0
        movss xmm0, dword ptr [esp + 0Ch]
        mulps xmm1, xmm2
        movaps xmmword ptr [eax], xmm1
        mov esp, ebp
        pop ebp
        ret
    }
}
