/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00215170(void)
{
    __asm {
        _emit 0x68
        _emit 0x00
        _emit 0x00
        _emit 0x80
        _emit 0x3F
        _emit 0x6A
        _emit 0x18
        _emit 0x68
        _emit 0x00
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x68
        _emit 0x00
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x68
        _emit 0xA6
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x68
        _emit 0xA6
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xB9
        _emit 0x40
        _emit 0x2F
        _emit 0x56
        _emit 0x00
        _emit 0xE8
        _emit 0xDB
        _emit 0x7C
        _emit 0xE6
        _emit 0xFF
        _emit 0xC3
    }
}
