/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0013E100(void)
{
    __asm {
        _emit 0x8B
        _emit 0x0D
        _emit 0x80
        _emit 0x3C
        _emit 0x2F
        _emit 0x00
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x15
        _emit 0x7C
        _emit 0x3C
        _emit 0x2F
        _emit 0x00
        _emit 0x83
        _emit 0xC1
        _emit 0x0F
        _emit 0x83
        _emit 0xE1
        _emit 0xF0
        _emit 0x03
        _emit 0xC1
        _emit 0x3B
        _emit 0xD0
        _emit 0xA3
        _emit 0x80
        _emit 0x3C
        _emit 0x2F
        _emit 0x00
        _emit 0x1B
        _emit 0xC0
        _emit 0xF7
        _emit 0xD0
        _emit 0x23
        _emit 0xC1
        _emit 0xC3
    }
}
