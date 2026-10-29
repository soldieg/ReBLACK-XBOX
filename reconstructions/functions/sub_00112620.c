/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00112620(void)
{
    __asm {
        _emit 0x50
        _emit 0xE8
        _emit 0xFA
        _emit 0xFE
        _emit 0xFF
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
