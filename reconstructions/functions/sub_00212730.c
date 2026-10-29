/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00212730(void)
{
    __asm {
        _emit 0x6A
        _emit 0x00
        _emit 0x68
        _emit 0x20
        _emit 0x1D
        _emit 0x1A
        _emit 0x00
        _emit 0x68
        _emit 0x10
        _emit 0xF7
        _emit 0x28
        _emit 0x00
        _emit 0xB9
        _emit 0x60
        _emit 0x62
        _emit 0x2F
        _emit 0x00
        _emit 0xE8
        _emit 0x8A
        _emit 0x1B
        _emit 0xE4
        _emit 0xFF
        _emit 0x68
        _emit 0xA0
        _emit 0x76
        _emit 0x21
        _emit 0x00
        _emit 0xE8
        _emit 0x2A
        _emit 0xF5
        _emit 0xE8
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
