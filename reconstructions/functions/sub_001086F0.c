/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001086F0(void)
{
    __asm {
        _emit 0x66
        _emit 0xFF
        _emit 0x48
        _emit 0x58
        _emit 0xF7
        _emit 0x40
        _emit 0x58
        _emit 0xFF
        _emit 0xFF
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0x08
        _emit 0x6A
        _emit 0x00
        _emit 0xE8
        _emit 0x7C
        _emit 0xEE
        _emit 0xFF
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
