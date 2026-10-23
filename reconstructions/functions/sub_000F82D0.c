__declspec(naked) void __cdecl sub_000F82D0(void)
{
    __asm {
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 8]
        mov dword ptr [esi], 00293aach
        // shortcut: raw rel32 targets the helper in the original mapped image.
        __emit 0e8h
        __emit 03eh
        __emit 09eh
        __emit 0ffh
        __emit 0ffh
        pop edi
        mov dword ptr [esi], 002938d4h
        pop esi
        ret
    }
}
