/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001CB4E0(void)
{
    __asm {
        _emit 0x8B
        _emit 0xC6
        _emit 0xE8
        _emit 0x69
        _emit 0xCF
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0x06
        _emit 0x8B
        _emit 0xCE
        _emit 0xFF
        _emit 0x50
        _emit 0x44
        _emit 0x89
        _emit 0x86
        _emit 0xC4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC7
        _emit 0x86
        _emit 0xD8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
