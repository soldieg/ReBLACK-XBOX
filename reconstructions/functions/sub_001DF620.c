/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001DF620(void)
{
    __asm {
        _emit 0xA1
        _emit 0xB0
        _emit 0x19
        _emit 0x2D
        _emit 0x00
        _emit 0xE9
        _emit 0x76
        _emit 0x60
        _emit 0x02
        _emit 0x00
    }
}
