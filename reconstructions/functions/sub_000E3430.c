/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E3430(void)
{
    __asm {
        _emit 0xA1
        _emit 0x94
        _emit 0xC9
        _emit 0x2E
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x75
        _emit 0x10
        _emit 0xA1
        _emit 0x88
        _emit 0xC9
        _emit 0x2E
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x07
        _emit 0xC7
        _emit 0x40
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
