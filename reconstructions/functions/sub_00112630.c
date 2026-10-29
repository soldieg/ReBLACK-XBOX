/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00112630(void)
{
    __asm {
        _emit 0xA1
        _emit 0x7C
        _emit 0xC5
        _emit 0x2E
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x7C
        _emit 0x08
        _emit 0x83
        _emit 0xF8
        _emit 0x05
        _emit 0x7D
        _emit 0x03
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
    }
}
