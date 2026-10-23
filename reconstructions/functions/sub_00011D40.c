void __declspec(naked) sub_00011D40(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0FFFFFFF0h
        sub esp, 10h
        xorps xmm0, xmm0
        movaps xmm1, xmmword ptr [eax]
        movss dword ptr [esp + 0Ch], xmm0
        movaps xmm0, xmmword ptr [ecx]
        mulps xmm0, xmm1
        movaps xmm1, xmm0
        shufps xmm1, xmm0, 39h
        movaps xmm2, xmm1
        addss xmm0, xmm1
        shufps xmm2, xmm1, 39h
        addss xmm0, xmm2
        lea edx, [esp + 0Ch]
        movss dword ptr [edx], xmm0
        movss xmm0, dword ptr [esp + 0Ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
