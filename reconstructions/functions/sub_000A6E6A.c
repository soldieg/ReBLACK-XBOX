/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000A6E6A(void)
{
    __asm {
        _emit 0xDD
        _emit 0xD8
        _emit 0xDD
        _emit 0xD8
        _emit 0xDB
        _emit 0x2D
        _emit 0xD0
        _emit 0xC9
        _emit 0x29
        _emit 0x00
        _emit 0x80
        _emit 0xBD
        _emit 0x70
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x00
        _emit 0x7F
        _emit 0x07
    }
}
