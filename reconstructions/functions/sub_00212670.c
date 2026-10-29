/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00212670(void)
{
    __asm {
        _emit 0x6A
        _emit 0x00
        _emit 0x68
        _emit 0x70
        _emit 0x08
        _emit 0x19
        _emit 0x00
        _emit 0x68
        _emit 0x68
        _emit 0xF7
        _emit 0x28
        _emit 0x00
        _emit 0xB9
        _emit 0xF8
        _emit 0x5D
        _emit 0x2F
        _emit 0x00
        _emit 0xE8
        _emit 0x2A
        _emit 0xDB
        _emit 0xE3
        _emit 0xFF
        _emit 0x68
        _emit 0x60
        _emit 0x76
        _emit 0x21
        _emit 0x00
        _emit 0xE8
        _emit 0xEA
        _emit 0xF5
        _emit 0xE8
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
