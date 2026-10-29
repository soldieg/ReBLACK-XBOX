/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00217410(void)
{
    __asm {
        _emit 0xB9
        _emit 0x71
        _emit 0xFF
        _emit 0x2B
        _emit 0x00
        _emit 0xE8
        _emit 0x06
        _emit 0x87
        _emit 0xFF
        _emit 0xFF
        _emit 0x68
        _emit 0x60
        _emit 0x7F
        _emit 0x21
        _emit 0x00
        _emit 0xE8
        _emit 0x56
        _emit 0xA8
        _emit 0xE8
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
