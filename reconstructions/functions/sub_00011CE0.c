void __declspec(naked) sub_00011CE0(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0FFFFFFF0h
        sub esp, 20h
        xorps xmm0, xmm0
        movss dword ptr [esp + 0Ch], xmm0
        movaps xmm0, xmmword ptr [eax]
        mulps xmm0, xmm0
        movaps xmm1, xmm0
        shufps xmm1, xmm0, 39h
        addss xmm0, xmm1
        movaps xmm2, xmm1
        shufps xmm2, xmm1, 39h
        addss xmm0, xmm2
        movaps xmmword ptr [esp + 10h], xmm0
        sqrtss xmm0, xmm0
        movss dword ptr [esp + 10h], xmm0
        movaps xmm0, xmmword ptr [esp + 10h]
        lea ecx, [esp + 0Ch]
        movss dword ptr [ecx], xmm0
        movss xmm0, dword ptr [esp + 0Ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
