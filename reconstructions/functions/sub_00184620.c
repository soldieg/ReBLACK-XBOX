/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00184620(void)
{
    __asm {
        _emit 0x8B
        _emit 0xC6
        _emit 0xC1
        _emit 0xE0
        _emit 0x04
        _emit 0x50
        _emit 0xE8
        _emit 0x04
        _emit 0xD8
        _emit 0xF1
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x04
        _emit 0x89
        _emit 0x47
        _emit 0x60
        _emit 0x89
        _emit 0x77
        _emit 0x6C
        _emit 0xC3
    }
}
