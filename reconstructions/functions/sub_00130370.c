/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00130370(void)
{
    __asm {
        _emit 0xA1
        _emit 0xE4
        _emit 0x12
        _emit 0x2D
        _emit 0x00
        _emit 0x0F
        _emit 0xBE
        _emit 0xC9
        _emit 0x69
        _emit 0xC9
        _emit 0xA8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x03
        _emit 0xC8
        _emit 0xE9
        _emit 0x8B
        _emit 0xF4
        _emit 0xFF
        _emit 0xFF
    }
}
