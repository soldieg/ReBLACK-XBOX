/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00215A30(void)
{
    __asm {
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0x68
        _emit 0xC0
        _emit 0xB2
        _emit 0x04
        _emit 0x00
        _emit 0x68
        _emit 0x6C
        _emit 0x46
        _emit 0x28
        _emit 0x00
        _emit 0xB9
        _emit 0x18
        _emit 0x3A
        _emit 0x2B
        _emit 0x00
        _emit 0xE8
        _emit 0xF6
        _emit 0xF3
        _emit 0xE3
        _emit 0xFF
        _emit 0x68
        _emit 0xF0
        _emit 0x77
        _emit 0x21
        _emit 0x00
        _emit 0xE8
        _emit 0x26
        _emit 0xC2
        _emit 0xE8
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
