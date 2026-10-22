__declspec(naked) float __cdecl sub_00015550(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff0h
        sub esp, 20h
        movaps xmm0, xmmword ptr [ecx]
        mulps xmm0, xmm0
        movaps xmm1, xmm0
        movaps xmm2, xmm0
        shufps xmm1, xmm0, 42h
        shufps xmm2, xmm0, 9
        addss xmm0, xmm2
        addss xmm0, xmm1
        movaps xmmword ptr [esp + 10h], xmm0
        sqrtss xmm0, xmm0
        movss dword ptr [esp + 10h], xmm0
        movaps xmm0, xmmword ptr [esp + 10h]
        lea eax, [esp + 0ch]
        movss dword ptr [eax], xmm0
        fld dword ptr [esp + 0ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
