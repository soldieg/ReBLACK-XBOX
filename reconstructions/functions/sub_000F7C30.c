__declspec(naked) void __cdecl sub_000F7C30(void)
{
    __asm {
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 8]
        mov dword ptr [esi], 00293aach
        // shortcut: raw rel32 targets the helper in the original mapped image.
        __emit 0e8h
        __emit 0deh
        __emit 0a4h
        __emit 0ffh
        __emit 0ffh
        pop edi
        mov dword ptr [esi], 002938d4h
        pop esi
        ret
    }
}
