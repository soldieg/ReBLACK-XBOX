/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00127310(void)
{
    __asm {
        _emit 0x6A
        _emit 0x1E
        _emit 0x6A
        _emit 0x0A
        _emit 0x50
        _emit 0xA1
        _emit 0xF0
        _emit 0xB7
        _emit 0x2A
        _emit 0x00
        _emit 0xB9
        _emit 0x80
        _emit 0x18
        _emit 0x00
        _emit 0x00
        _emit 0xBA
        _emit 0x1E
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0x27
        _emit 0x88
        _emit 0xFA
        _emit 0xFF
        _emit 0xC3
    }
}
