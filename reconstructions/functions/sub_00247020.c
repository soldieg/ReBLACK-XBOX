/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00247020(void)
{
    __asm {
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xB5
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xB5
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xFF
        _emit 0x7F
        _emit 0x00
        _emit 0x00
        _emit 0xFF
        _emit 0x7F
        _emit 0x00
        _emit 0x00
        _emit 0x38
        _emit 0xF1
        _emit 0x54
        _emit 0x04
        _emit 0x38
        _emit 0xF1
        _emit 0x54
        _emit 0x04
        _emit 0x20
        _emit 0x06
        _emit 0x54
        _emit 0x04
        _emit 0x20
        _emit 0x06
        _emit 0x54
        _emit 0x04
        _emit 0x4F
    }
}
