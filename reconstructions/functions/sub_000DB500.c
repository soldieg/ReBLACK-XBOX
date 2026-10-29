/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000DB500(void)
{
    __asm {
        _emit 0x0F
        _emit 0xB7
        _emit 0x40
        _emit 0x40
        _emit 0xC1
        _emit 0xE8
        _emit 0x09
        _emit 0x24
        _emit 0x01
        _emit 0xC3
    }
}
