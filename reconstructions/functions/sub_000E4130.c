__declspec(naked) void __cdecl sub_000E4130(void)
{
    __asm {
        mov ecx, dword ptr [eax + 3b8h]
        dec ecx
        mov dword ptr [eax + 3b8h], ecx
        inc ecx
        shl ecx, 5
        movaps xmm0, xmmword ptr [ecx + eax]
        add ecx, eax
        movaps xmmword ptr [eax], xmm0
        movaps xmm0, xmmword ptr [ecx + 10h]
        movaps xmmword ptr [eax + 10h], xmm0
        ret
    }
}
