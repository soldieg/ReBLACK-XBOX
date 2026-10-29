/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_002165A0(void)
{
    __asm {
        _emit 0xB9
        _emit 0xE1
        _emit 0xE3
        _emit 0x2B
        _emit 0x00
        _emit 0xE8
        _emit 0x96
        _emit 0x95
        _emit 0xFF
        _emit 0xFF
        _emit 0x68
        _emit 0xB0
        _emit 0x7D
        _emit 0x21
        _emit 0x00
        _emit 0xE8
        _emit 0xC6
        _emit 0xB6
        _emit 0xE8
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
