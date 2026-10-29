/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B5E20(void)
{
    __asm {
        _emit 0x8B
        _emit 0x81
        _emit 0xC4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xF8
        _emit 0x03
        _emit 0x74
        _emit 0x08
        _emit 0x83
        _emit 0xF8
        _emit 0x04
        _emit 0x74
        _emit 0x03
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
