/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E3910(void)
{
    __asm {
        _emit 0x8B
        _emit 0x48
        _emit 0x04
        _emit 0x33
        _emit 0xC0
        _emit 0x56
        _emit 0x8B
        _emit 0x51
        _emit 0x04
        _emit 0x8B
        _emit 0x71
        _emit 0x08
        _emit 0x8B
        _emit 0x09
        _emit 0x2B
        _emit 0xD6
        _emit 0x03
        _emit 0xC2
        _emit 0x85
        _emit 0xC9
        _emit 0x75
        _emit 0xF0
        _emit 0x5E
        _emit 0xC3
    }
}
