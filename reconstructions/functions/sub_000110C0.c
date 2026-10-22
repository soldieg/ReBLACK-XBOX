__declspec(naked) void __cdecl sub_000110C0(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff0h
        sub esp, 10h
        movaps xmm0, xmmword ptr [ecx]
        mulps xmm0, xmm0
        movaps xmm1, xmm0
        movaps xmm2, xmm0
        shufps xmm1, xmm0, 42h
        shufps xmm2, xmm0, 09h
        addss xmm0, xmm2
        lea eax, [esp + 0ch]
        addss xmm0, xmm1
        movss dword ptr [eax], xmm0
        fld dword ptr [esp + 0ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
