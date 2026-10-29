/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000B2600(void)
{
    __asm {
        _emit 0x83
        _emit 0xF8
        _emit 0x65
        _emit 0x77
        _emit 0x1A
        _emit 0x0F
        _emit 0xB6
        _emit 0x80
        _emit 0x38
        _emit 0x26
        _emit 0x0B
        _emit 0x00
        _emit 0xFF
        _emit 0x24
        _emit 0x85
        _emit 0x24
        _emit 0x26
        _emit 0x0B
        _emit 0x00
        _emit 0xB0
        _emit 0x20
        _emit 0xC3
        _emit 0xB0
        _emit 0x10
        _emit 0xC3
        _emit 0xB0
        _emit 0x08
        _emit 0xC3
        _emit 0xB0
        _emit 0x04
        _emit 0xC3
        _emit 0x0C
        _emit 0xFF
        _emit 0xC3
    }
}
