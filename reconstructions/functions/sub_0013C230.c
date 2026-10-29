/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0013C230(void)
{
    __asm {
        _emit 0x83
        _emit 0xC1
        _emit 0x08
        _emit 0x51
        _emit 0xE8
        _emit 0xD7
        _emit 0x2B
        _emit 0xF4
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x04
        _emit 0x85
        _emit 0xC0
        _emit 0x0F
        _emit 0x95
        _emit 0xC0
        _emit 0xC3
    }
}
