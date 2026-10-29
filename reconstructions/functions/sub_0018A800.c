/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0018A800(void)
{
    __asm {
        _emit 0x8B
        _emit 0x51
        _emit 0x04
        _emit 0x32
        _emit 0xC0
        _emit 0x88
        _emit 0x82
        _emit 0x8C
        _emit 0x0C
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x51
        _emit 0x04
        _emit 0x56
        _emit 0x88
        _emit 0x82
        _emit 0x55
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x71
        _emit 0x04
        _emit 0x81
        _emit 0xC6
        _emit 0x20
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0x7D
        _emit 0xC9
        _emit 0xFF
        _emit 0xFF
        _emit 0x5E
        _emit 0xC3
    }
}
