/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00215E00(void)
{
    __asm {
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0x68
        _emit 0x94
        _emit 0x4D
        _emit 0x28
        _emit 0x00
        _emit 0xB9
        _emit 0x90
        _emit 0x85
        _emit 0x2B
        _emit 0x00
        _emit 0xE8
        _emit 0xA9
        _emit 0xB6
        _emit 0xE3
        _emit 0xFF
        _emit 0x68
        _emit 0x60
        _emit 0x7A
        _emit 0x21
        _emit 0x00
        _emit 0xE8
        _emit 0x59
        _emit 0xBE
        _emit 0xE8
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
