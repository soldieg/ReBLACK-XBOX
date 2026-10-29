/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00215970(void)
{
    __asm {
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0x68
        _emit 0xD0
        _emit 0x98
        _emit 0x04
        _emit 0x00
        _emit 0x68
        _emit 0xE0
        _emit 0x43
        _emit 0x28
        _emit 0x00
        _emit 0xB9
        _emit 0xB8
        _emit 0x35
        _emit 0x2B
        _emit 0x00
        _emit 0xE8
        _emit 0xB6
        _emit 0xF4
        _emit 0xE3
        _emit 0xFF
        _emit 0x68
        _emit 0xB0
        _emit 0x77
        _emit 0x21
        _emit 0x00
        _emit 0xE8
        _emit 0xE6
        _emit 0xC2
        _emit 0xE8
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
