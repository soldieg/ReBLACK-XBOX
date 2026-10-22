__declspec(naked) void __cdecl sub_00011040(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff0h
        sub esp, 10h
        movss xmm0, dword ptr [ebp + 08h]
        mov eax, ecx
        movaps xmm1, xmmword ptr [eax]
        movss dword ptr [esp + 0ch], xmm0
        lea ecx, [esp + 0ch]
        movss xmm0, dword ptr [ecx]
        shufps xmm0, xmm0, 0
        mulps xmm1, xmm0
        movaps xmmword ptr [eax], xmm1
        mov esp, ebp
        pop ebp
        ret 4
    }
}
