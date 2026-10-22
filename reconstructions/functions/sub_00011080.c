__declspec(naked) void __cdecl sub_00011080(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff0h
        sub esp, 10h
        movss xmm0, dword ptr [ebp + 0ch]
        movaps xmm1, xmmword ptr [ecx]
        lea eax, [esp + 0ch]
        movss dword ptr [esp + 0ch], xmm0
        movss xmm0, dword ptr [eax]
        mov eax, dword ptr [ebp + 08h]
        shufps xmm0, xmm0, 0
        mulps xmm1, xmm0
        movaps xmmword ptr [eax], xmm1
        mov esp, ebp
        pop ebp
        ret 8
    }
}
