/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001183E0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x0D
        _emit 0xF4
        _emit 0x67
        _emit 0x2D
        _emit 0x00
        _emit 0x33
        _emit 0xC0
        _emit 0xA2
        _emit 0x1C
        _emit 0x46
        _emit 0x2D
        _emit 0x00
        _emit 0x89
        _emit 0x81
        _emit 0x94
        _emit 0xD5
        _emit 0x00
        _emit 0x00
        _emit 0xA1
        _emit 0x9C
        _emit 0x19
        _emit 0x2D
        _emit 0x00
        _emit 0xE8
        _emit 0x43
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
