__declspec(naked) void __cdecl sub_000E4160(void)
{
    __asm {
        mov edx, dword ptr [ecx + 3b8h]
        movaps xmm0, xmmword ptr [ecx]
        lea eax, [edx + 1]
        shl eax, 5
        add eax, ecx
        inc edx
        mov dword ptr [ecx + 3b8h], edx
        movaps xmmword ptr [eax], xmm0
        movaps xmm0, xmmword ptr [ecx + 10h]
        movaps xmmword ptr [eax + 10h], xmm0
        ret
    }
}
