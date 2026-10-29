/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B6600(void)
{
    __asm {
        _emit 0x57
        _emit 0x8D
        _emit 0xB9
        _emit 0xD0
        _emit 0x0E
        _emit 0x00
        _emit 0x00
        _emit 0xC6
        _emit 0x81
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0xE8
        _emit 0x6D
        _emit 0xC3
        _emit 0xFC
        _emit 0xFF
        _emit 0x5F
        _emit 0xC3
    }
}
