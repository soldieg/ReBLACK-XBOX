/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001EC420(void)
{
    __asm {
        _emit 0x0F
        _emit 0x57
        _emit 0xC0
        _emit 0x0F
        _emit 0x29
        _emit 0x00
        _emit 0x0F
        _emit 0x57
        _emit 0xC0
        _emit 0xC7
        _emit 0x40
        _emit 0x38
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x40
        _emit 0x10
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x40
        _emit 0x14
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x40
        _emit 0x18
        _emit 0xE9
        _emit 0x3C
        _emit 0x77
        _emit 0xF8
        _emit 0xFF
    }
}
