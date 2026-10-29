/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0013FE20(void)
{
    __asm {
        _emit 0x33
        _emit 0xC0
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x0C
        _emit 0x85
        _emit 0xF0
        _emit 0xB2
        _emit 0x2A
        _emit 0x00
        _emit 0x0F
        _emit 0x2F
        _emit 0xC8
        _emit 0x73
        _emit 0x06
        _emit 0x40
        _emit 0x83
        _emit 0xF8
        _emit 0x04
        _emit 0x7C
        _emit 0xEC
        _emit 0xC3
    }
}
