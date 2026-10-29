/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00181B30(void)
{
    __asm {
        _emit 0x33
        _emit 0xC0
        _emit 0x39
        _emit 0x14
        _emit 0xC1
        _emit 0x74
        _emit 0x07
        _emit 0x40
        _emit 0x83
        _emit 0xF8
        _emit 0x04
        _emit 0x7C
        _emit 0xF5
        _emit 0xC3
        _emit 0xC7
        _emit 0x04
        _emit 0xC1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
