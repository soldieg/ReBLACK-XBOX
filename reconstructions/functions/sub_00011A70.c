__declspec(naked) void __cdecl sub_00011A70(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff0h
        sub esp, 10h
        movaps xmm1, xmmword ptr [edx]
        movss dword ptr [esp + 0ch], xmm0
        lea ecx, [esp + 0ch]
        movss xmm0, dword ptr [ecx]
        shufps xmm0, xmm0, 0
        mulps xmm1, xmm0
        movaps xmmword ptr [eax], xmm1
        mov esp, ebp
        pop ebp
        ret
    }
}
