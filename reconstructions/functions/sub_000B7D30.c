/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000B7D30(void)
{
    __asm {
        _emit 0x8B
        _emit 0x51
        _emit 0x38
        _emit 0x50
        _emit 0x52
        _emit 0xE8
        _emit 0x36
        _emit 0x62
        _emit 0xFD
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x08
        _emit 0xC3
    }
}
