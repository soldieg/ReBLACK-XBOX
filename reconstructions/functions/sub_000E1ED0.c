/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E1ED0(void)
{
    __asm {
        _emit 0x50
        _emit 0x51
        _emit 0xFF
        _emit 0x15
        _emit 0x60
        _emit 0x2B
        _emit 0x56
        _emit 0x00
        _emit 0x83
        _emit 0xC4
        _emit 0x08
        _emit 0xC3
    }
}
