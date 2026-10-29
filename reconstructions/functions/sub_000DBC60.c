/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000DBC60(void)
{
    __asm {
        _emit 0x8B
        _emit 0x80
        _emit 0xB4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x06
        _emit 0x50
        _emit 0xE8
        _emit 0xF0
        _emit 0xFE
        _emit 0xFF
        _emit 0xFF
        _emit 0xC3
    }
}
