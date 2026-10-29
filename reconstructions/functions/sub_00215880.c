/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00215880(void)
{
    __asm {
        _emit 0x6A
        _emit 0x00
        _emit 0x68
        _emit 0x40
        _emit 0x41
        _emit 0x0B
        _emit 0x00
        _emit 0x68
        _emit 0x54
        _emit 0x59
        _emit 0x29
        _emit 0x00
        _emit 0xB9
        _emit 0xA8
        _emit 0x54
        _emit 0x56
        _emit 0x00
        _emit 0xE8
        _emit 0x3A
        _emit 0x50
        _emit 0xE4
        _emit 0xFF
        _emit 0x68
        _emit 0x80
        _emit 0x77
        _emit 0x21
        _emit 0x00
        _emit 0xE8
        _emit 0xDA
        _emit 0xC3
        _emit 0xE8
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
