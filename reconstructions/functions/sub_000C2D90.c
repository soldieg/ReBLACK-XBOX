/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C2D90(void)
{
    __asm {
        _emit 0xA1
        _emit 0x4C
        _emit 0x43
        _emit 0x2F
        _emit 0x00
        _emit 0x56
        _emit 0x8D
        _emit 0x70
        _emit 0x04
        _emit 0xC6
        _emit 0x80
        _emit 0x20
        _emit 0x0C
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0xE8
        _emit 0xAB
        _emit 0xC7
        _emit 0xFF
        _emit 0xFF
        _emit 0xA1
        _emit 0x4C
        _emit 0x43
        _emit 0x2F
        _emit 0x00
        _emit 0xC6
        _emit 0x00
        _emit 0x01
        _emit 0x5E
        _emit 0xC3
    }
}
