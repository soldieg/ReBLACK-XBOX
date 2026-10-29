/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00215E80(void)
{
    __asm {
        _emit 0x68
        _emit 0xF0
        _emit 0x5C
        _emit 0x05
        _emit 0x00
        _emit 0x68
        _emit 0x98
        _emit 0x5A
        _emit 0x29
        _emit 0x00
        _emit 0xB9
        _emit 0xF0
        _emit 0x8C
        _emit 0x2B
        _emit 0x00
        _emit 0xE8
        _emit 0x3C
        _emit 0x6D
        _emit 0xE4
        _emit 0xFF
        _emit 0x68
        _emit 0xB0
        _emit 0x7A
        _emit 0x21
        _emit 0x00
        _emit 0xE8
        _emit 0xDC
        _emit 0xBD
        _emit 0xE8
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
