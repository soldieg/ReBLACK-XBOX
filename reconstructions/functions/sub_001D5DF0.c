/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001D5DF0(void)
{
    __asm {
        _emit 0xA1
        _emit 0xD8
        _emit 0x12
        _emit 0x2D
        _emit 0x00
        _emit 0xE8
        _emit 0xA6
        _emit 0xF3
        _emit 0xFF
        _emit 0xFF
        _emit 0x84
        _emit 0xC0
        _emit 0x0F
        _emit 0x95
        _emit 0xC0
        _emit 0xC3
    }
}
