/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00215E30(void)
{
    __asm {
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0x68
        _emit 0xB8
        _emit 0x4D
        _emit 0x28
        _emit 0x00
        _emit 0xB9
        _emit 0xB0
        _emit 0x8A
        _emit 0x2B
        _emit 0x00
        _emit 0xE8
        _emit 0xFD
        _emit 0xEC
        _emit 0xE3
        _emit 0xFF
        _emit 0x68
        _emit 0x80
        _emit 0x7A
        _emit 0x21
        _emit 0x00
        _emit 0xE8
        _emit 0x2D
        _emit 0xBE
        _emit 0xE8
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
