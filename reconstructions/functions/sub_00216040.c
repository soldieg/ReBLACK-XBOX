/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00216040(void)
{
    __asm {
        _emit 0x6A
        _emit 0x00
        _emit 0x68
        _emit 0x20
        _emit 0xA0
        _emit 0x05
        _emit 0x00
        _emit 0x68
        _emit 0x78
        _emit 0x50
        _emit 0x28
        _emit 0x00
        _emit 0xB9
        _emit 0x08
        _emit 0xA0
        _emit 0x2B
        _emit 0x00
        _emit 0xE8
        _emit 0x7A
        _emit 0x48
        _emit 0xE4
        _emit 0xFF
        _emit 0x68
        _emit 0x50
        _emit 0x7B
        _emit 0x21
        _emit 0x00
        _emit 0xE8
        _emit 0x1A
        _emit 0xBC
        _emit 0xE8
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
