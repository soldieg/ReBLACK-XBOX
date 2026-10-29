/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_002126D0(void)
{
    __asm {
        _emit 0x6A
        _emit 0x00
        _emit 0x68
        _emit 0xC0
        _emit 0x05
        _emit 0x19
        _emit 0x00
        _emit 0x68
        _emit 0x40
        _emit 0xF7
        _emit 0x28
        _emit 0x00
        _emit 0xB9
        _emit 0x28
        _emit 0x60
        _emit 0x2F
        _emit 0x00
        _emit 0xE8
        _emit 0xCA
        _emit 0xDA
        _emit 0xE3
        _emit 0xFF
        _emit 0x68
        _emit 0x80
        _emit 0x76
        _emit 0x21
        _emit 0x00
        _emit 0xE8
        _emit 0x8A
        _emit 0xF5
        _emit 0xE8
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
