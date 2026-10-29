/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000B00A3(void)
{
    __asm {
        _emit 0xE8
        _emit 0x08
        _emit 0x66
        _emit 0xFD
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x04
        _emit 0xC7
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
