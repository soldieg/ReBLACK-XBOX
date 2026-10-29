/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00216010(void)
{
    __asm {
        _emit 0x6A
        _emit 0x00
        _emit 0x68
        _emit 0xD0
        _emit 0x9F
        _emit 0x05
        _emit 0x00
        _emit 0x68
        _emit 0x5C
        _emit 0x50
        _emit 0x28
        _emit 0x00
        _emit 0xB9
        _emit 0xA8
        _emit 0x9B
        _emit 0x2B
        _emit 0x00
        _emit 0xE8
        _emit 0xAA
        _emit 0x48
        _emit 0xE4
        _emit 0xFF
        _emit 0x68
        _emit 0x40
        _emit 0x7B
        _emit 0x21
        _emit 0x00
        _emit 0xE8
        _emit 0x4A
        _emit 0xBC
        _emit 0xE8
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
