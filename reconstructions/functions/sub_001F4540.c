/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F4540(void)
{
    __asm {
        _emit 0xA1
        _emit 0xF0
        _emit 0x45
        _emit 0x2D
        _emit 0x00
        _emit 0x32
        _emit 0xC9
        _emit 0xC7
        _emit 0x80
        _emit 0x08
        _emit 0x02
        _emit 0x02
        _emit 0x00
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x88
        _emit 0x0C
        _emit 0x02
        _emit 0x02
        _emit 0x00
        _emit 0x88
        _emit 0x88
        _emit 0x0D
        _emit 0x02
        _emit 0x02
        _emit 0x00
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
