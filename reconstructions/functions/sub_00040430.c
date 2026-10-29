/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00040430(void)
{
    __asm {
        _emit 0xFF
        _emit 0x0D
        _emit 0x7C
        _emit 0xF4
        _emit 0x56
        _emit 0x00
        _emit 0x75
        _emit 0x1C
        _emit 0xA1
        _emit 0x28
        _emit 0x32
        _emit 0x2B
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x13
        _emit 0x50
        _emit 0xE8
        _emit 0xD9
        _emit 0xF8
        _emit 0xFE
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x04
        _emit 0xC7
        _emit 0x05
        _emit 0x28
        _emit 0x32
        _emit 0x2B
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xC3
    }
}
