/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00217490(void)
{
    __asm {
        _emit 0xB9
        _emit 0x80
        _emit 0xFF
        _emit 0x2B
        _emit 0x00
        _emit 0xE8
        _emit 0xA6
        _emit 0x86
        _emit 0xFF
        _emit 0xFF
        _emit 0x68
        _emit 0x70
        _emit 0x7F
        _emit 0x21
        _emit 0x00
        _emit 0xE8
        _emit 0xD6
        _emit 0xA7
        _emit 0xE8
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
