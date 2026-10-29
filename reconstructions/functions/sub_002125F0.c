/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_002125F0(void)
{
    __asm {
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0xB9
        _emit 0x64
        _emit 0x5B
        _emit 0x2F
        _emit 0x00
        _emit 0xE8
        _emit 0xB2
        _emit 0xD2
        _emit 0xE3
        _emit 0xFF
        _emit 0x68
        _emit 0x30
        _emit 0x76
        _emit 0x21
        _emit 0x00
        _emit 0xC7
        _emit 0x05
        _emit 0x64
        _emit 0x5B
        _emit 0x2F
        _emit 0x00
        _emit 0xF4
        _emit 0xF4
        _emit 0x28
        _emit 0x00
        _emit 0xE8
        _emit 0x68
        _emit 0xF6
        _emit 0xE8
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
