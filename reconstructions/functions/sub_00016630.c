__declspec(naked) float __cdecl sub_00016630(void)
{
    __asm {
        mov eax, dword ptr [002B8164h]
        test eax, eax
        jz zero
        fld dword ptr [eax + 0Ch]
        ret
    zero:
        /* shortcut: MSVC inline asm rejects absolute m32 FLD; upgrade when it can encode it without a segment prefix. */
        _emit 0xD9
        _emit 0x05
        _emit 0xBC
        _emit 0x5C
        _emit 0x29
        _emit 0x00
        ret
    }
}
