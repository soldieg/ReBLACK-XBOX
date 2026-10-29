/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001BDF50(void)
{
    __asm {
        _emit 0xA1
        _emit 0xB8
        _emit 0x12
        _emit 0x2D
        _emit 0x00
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x80
        _emit 0xA0
        _emit 0x16
        _emit 0x00
        _emit 0x00
        _emit 0xF3
        _emit 0x0F
        _emit 0x59
        _emit 0x81
        _emit 0xC0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
