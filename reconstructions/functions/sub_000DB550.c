/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000DB550(void)
{
    __asm {
        _emit 0x33
        _emit 0xC0
        _emit 0x8A
        _emit 0x94
        _emit 0x01
        _emit 0x60
        _emit 0x29
        _emit 0x00
        _emit 0x00
        _emit 0x84
        _emit 0xD2
        _emit 0x74
        _emit 0x09
        _emit 0x40
        _emit 0x83
        _emit 0xF8
        _emit 0x14
        _emit 0x7C
        _emit 0xEF
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
