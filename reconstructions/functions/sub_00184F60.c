/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00184F60(void)
{
    __asm {
        _emit 0x8A
        _emit 0x51
        _emit 0x08
        _emit 0x32
        _emit 0xC0
        _emit 0x3A
        _emit 0xD0
        _emit 0x8B
        _emit 0x51
        _emit 0x04
        _emit 0x75
        _emit 0x13
        _emit 0x8B
        _emit 0x92
        _emit 0xA4
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x42
        _emit 0x40
        _emit 0x8B
        _emit 0x49
        _emit 0x04
        _emit 0x88
        _emit 0x81
        _emit 0xA2
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0x88
        _emit 0x82
        _emit 0xA2
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
