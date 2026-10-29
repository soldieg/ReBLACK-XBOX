/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001257F0(void)
{
    __asm {
        _emit 0x0F
        _emit 0x57
        _emit 0xC0
        _emit 0x89
        _emit 0x48
        _emit 0x0C
        _emit 0x33
        _emit 0xC9
        _emit 0x89
        _emit 0x48
        _emit 0x04
        _emit 0x88
        _emit 0x48
        _emit 0x16
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x40
        _emit 0x20
        _emit 0xC6
        _emit 0x40
        _emit 0x1D
        _emit 0x01
        _emit 0xC3
    }
}
