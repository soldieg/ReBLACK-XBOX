/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F19D0(void)
{
    __asm {
        _emit 0x6A
        _emit 0x50
        _emit 0x50
        _emit 0x83
        _emit 0xC1
        _emit 0x08
        _emit 0x51
        _emit 0xE8
        _emit 0x64
        _emit 0x05
        _emit 0xEB
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x0C
        _emit 0xC3
    }
}
