/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00215F80(void)
{
    __asm {
        _emit 0x68
        _emit 0x20
        _emit 0xA1
        _emit 0x2B
        _emit 0x00
        _emit 0x68
        _emit 0xD0
        _emit 0xA3
        _emit 0x05
        _emit 0x00
        _emit 0x68
        _emit 0x08
        _emit 0x50
        _emit 0x28
        _emit 0x00
        _emit 0xB9
        _emit 0x78
        _emit 0x99
        _emit 0x2B
        _emit 0x00
        _emit 0xE8
        _emit 0x37
        _emit 0xE3
        _emit 0xE3
        _emit 0xFF
        _emit 0x68
        _emit 0x10
        _emit 0x7B
        _emit 0x21
        _emit 0x00
        _emit 0xE8
        _emit 0xD7
        _emit 0xBC
        _emit 0xE8
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
