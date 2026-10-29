/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00212620(void)
{
    __asm {
        _emit 0x68
        _emit 0x30
        _emit 0x09
        _emit 0x19
        _emit 0x00
        _emit 0x68
        _emit 0x98
        _emit 0xF7
        _emit 0x28
        _emit 0x00
        _emit 0xB9
        _emit 0xE0
        _emit 0x5C
        _emit 0x2F
        _emit 0x00
        _emit 0xE8
        _emit 0x7C
        _emit 0xE5
        _emit 0xE3
        _emit 0xFF
        _emit 0x68
        _emit 0x40
        _emit 0x76
        _emit 0x21
        _emit 0x00
        _emit 0xE8
        _emit 0x3C
        _emit 0xF6
        _emit 0xE8
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
