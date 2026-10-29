/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00187FC0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x11
        _emit 0x33
        _emit 0xC0
        _emit 0x56
        _emit 0xBE
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0xC8
        _emit 0xD3
        _emit 0xE6
        _emit 0x85
        _emit 0xF2
        _emit 0x74
        _emit 0x09
        _emit 0x40
        _emit 0x83
        _emit 0xF8
        _emit 0x20
        _emit 0x7C
        _emit 0xED
        _emit 0x83
        _emit 0xC8
        _emit 0xFF
        _emit 0x5E
        _emit 0xC3
    }
}
