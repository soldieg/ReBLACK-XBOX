/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00215910(void)
{
    __asm {
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0x68
        _emit 0x40
        _emit 0x87
        _emit 0x04
        _emit 0x00
        _emit 0x68
        _emit 0x90
        _emit 0x42
        _emit 0x28
        _emit 0x00
        _emit 0xB9
        _emit 0x88
        _emit 0x33
        _emit 0x2B
        _emit 0x00
        _emit 0xE8
        _emit 0x16
        _emit 0xF5
        _emit 0xE3
        _emit 0xFF
        _emit 0x68
        _emit 0x90
        _emit 0x77
        _emit 0x21
        _emit 0x00
        _emit 0xE8
        _emit 0x46
        _emit 0xC3
        _emit 0xE8
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
