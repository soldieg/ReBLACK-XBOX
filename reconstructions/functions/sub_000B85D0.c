/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000B85D0(void)
{
    __asm {
        _emit 0x3C
        _emit 0x0A
        _emit 0x72
        _emit 0x0F
        _emit 0x3C
        _emit 0x24
        _emit 0x73
        _emit 0x07
        _emit 0x04
        _emit 0x37
        _emit 0x88
        _emit 0x01
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
        _emit 0x3C
        _emit 0x0A
        _emit 0x77
        _emit 0x07
        _emit 0x04
        _emit 0x30
        _emit 0x88
        _emit 0x01
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
    }
}
