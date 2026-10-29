/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0012B290(void)
{
    __asm {
        _emit 0xB9
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x88
        _emit 0x50
        _emit 0x0C
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x88
        _emit 0xA8
        _emit 0x0E
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
