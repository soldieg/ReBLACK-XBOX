/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00217230(void)
{
    __asm {
        _emit 0xB9
        _emit 0x41
        _emit 0xFF
        _emit 0x2B
        _emit 0x00
        _emit 0xE8
        _emit 0xE6
        _emit 0x88
        _emit 0xFF
        _emit 0xFF
        _emit 0x68
        _emit 0x00
        _emit 0x7F
        _emit 0x21
        _emit 0x00
        _emit 0xE8
        _emit 0x36
        _emit 0xAA
        _emit 0xE8
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
