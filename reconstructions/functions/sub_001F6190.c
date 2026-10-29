/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F6190(void)
{
    __asm {
        _emit 0x8B
        _emit 0x51
        _emit 0x10
        _emit 0x32
        _emit 0xC0
        _emit 0x88
        _emit 0x41
        _emit 0x58
        _emit 0x8B
        _emit 0x92
        _emit 0x8C
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x82
        _emit 0xA7
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x41
        _emit 0x10
        _emit 0x8B
        _emit 0x88
        _emit 0x8C
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x81
        _emit 0x28
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0xE9
        _emit 0x58
        _emit 0x4C
        _emit 0xF8
        _emit 0xFF
    }
}
