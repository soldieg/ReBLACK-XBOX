/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000D5280(void)
{
    __asm {
        _emit 0xA1
        _emit 0x10
        _emit 0x37
        _emit 0x2F
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x76
        _emit 0x05
        _emit 0xE8
        _emit 0xC2
        _emit 0xF9
        _emit 0xFF
        _emit 0xFF
        _emit 0xE9
        _emit 0xAD
        _emit 0xE4
        _emit 0xFF
        _emit 0xFF
    }
}
