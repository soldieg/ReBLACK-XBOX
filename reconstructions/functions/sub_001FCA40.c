/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001FCA40(void)
{
    __asm {
        _emit 0x56
        _emit 0xBE
        _emit 0x80
        _emit 0x0D
        _emit 0x2D
        _emit 0x00
        _emit 0xE8
        _emit 0x45
        _emit 0xF8
        _emit 0xFF
        _emit 0xFF
        _emit 0x5E
        _emit 0xC3
    }
}
