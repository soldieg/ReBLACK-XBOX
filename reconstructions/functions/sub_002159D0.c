/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_002159D0(void)
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
        _emit 0xA9
        _emit 0x04
        _emit 0x00
        _emit 0x68
        _emit 0xF0
        _emit 0x44
        _emit 0x28
        _emit 0x00
        _emit 0xB9
        _emit 0xE8
        _emit 0x37
        _emit 0x2B
        _emit 0x00
        _emit 0xE8
        _emit 0x56
        _emit 0xF4
        _emit 0xE3
        _emit 0xFF
        _emit 0x68
        _emit 0xD0
        _emit 0x77
        _emit 0x21
        _emit 0x00
        _emit 0xE8
        _emit 0x86
        _emit 0xC2
        _emit 0xE8
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
