/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001D2D70(void)
{
    __asm {
        _emit 0x57
        _emit 0x8B
        _emit 0xF8
        _emit 0x8B
        _emit 0x07
        _emit 0x57
        _emit 0x8B
        _emit 0xCF
        _emit 0xFF
        _emit 0x50
        _emit 0x04
        _emit 0xA1
        _emit 0x88
        _emit 0x19
        _emit 0x2D
        _emit 0x00
        _emit 0xE8
        _emit 0xAB
        _emit 0xF4
        _emit 0xFC
        _emit 0xFF
        _emit 0x5F
        _emit 0xC3
    }
}
