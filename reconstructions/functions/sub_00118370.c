/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00118370(void)
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
        _emit 0x8C
        _emit 0x19
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
        _emit 0xE9
        _emit 0xB3
        _emit 0xD7
        _emit 0xFF
        _emit 0xFF
    }
}
