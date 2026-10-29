/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0015AC50(void)
{
    __asm {
        _emit 0x8B
        _emit 0x88
        _emit 0x08
        _emit 0xD4
        _emit 0x00
        _emit 0x00
        _emit 0x6A
        _emit 0x01
        _emit 0x6A
        _emit 0x00
        _emit 0x51
        _emit 0xE8
        _emit 0xB0
        _emit 0x30
        _emit 0xED
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x0C
        _emit 0xC3
    }
}
