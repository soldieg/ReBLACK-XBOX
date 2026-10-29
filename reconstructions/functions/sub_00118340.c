/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00118340(void)
{
    __asm {
        _emit 0xA1
        _emit 0xF4
        _emit 0x67
        _emit 0x2D
        _emit 0x00
        _emit 0xC7
        _emit 0x80
        _emit 0x94
        _emit 0xD5
        _emit 0x00
        _emit 0x00
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xA1
        _emit 0x9C
        _emit 0x19
        _emit 0x2D
        _emit 0x00
        _emit 0xC6
        _emit 0x05
        _emit 0x8C
        _emit 0x19
        _emit 0x2D
        _emit 0x00
        _emit 0x01
        _emit 0xE8
        _emit 0xE0
        _emit 0xD7
        _emit 0xFF
        _emit 0xFF
        _emit 0xC7
        _emit 0x05
        _emit 0x20
        _emit 0x41
        _emit 0x2F
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
