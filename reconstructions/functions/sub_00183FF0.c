/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00183FF0(void)
{
    __asm {
        _emit 0x8A
        _emit 0x48
        _emit 0x09
        _emit 0x84
        _emit 0xC9
        _emit 0x75
        _emit 0x11
        _emit 0x8B
        _emit 0x08
        _emit 0x8A
        _emit 0x50
        _emit 0x08
        _emit 0x3A
        _emit 0x51
        _emit 0x35
        _emit 0x72
        _emit 0x07
        _emit 0xC6
        _emit 0x40
        _emit 0x09
        _emit 0x01
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
    }
}
