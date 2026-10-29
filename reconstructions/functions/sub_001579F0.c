/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001579F0(void)
{
    __asm {
        _emit 0xB9
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xD2
        _emit 0x89
        _emit 0x10
        _emit 0x88
        _emit 0x50
        _emit 0x04
        _emit 0x83
        _emit 0xC0
        _emit 0x08
        _emit 0x49
        _emit 0x75
        _emit 0xF5
        _emit 0xC3
    }
}
