/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00215DC0(void)
{
    __asm {
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0x68
        _emit 0x30
        _emit 0xE8
        _emit 0x04
        _emit 0x00
        _emit 0x68
        _emit 0xC4
        _emit 0x4A
        _emit 0x28
        _emit 0x00
        _emit 0xB9
        _emit 0xA8
        _emit 0x5B
        _emit 0x2B
        _emit 0x00
        _emit 0xE8
        _emit 0x36
        _emit 0xB7
        _emit 0xE3
        _emit 0xFF
        _emit 0x68
        _emit 0xB0
        _emit 0x79
        _emit 0x21
        _emit 0x00
        _emit 0xE8
        _emit 0x96
        _emit 0xBE
        _emit 0xE8
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
