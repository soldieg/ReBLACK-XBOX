/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F1770(void)
{
    __asm {
        _emit 0xA1
        _emit 0xD4
        _emit 0x3B
        _emit 0x2F
        _emit 0x00
        _emit 0x89
        _emit 0x0C
        _emit 0x90
        _emit 0xC3
    }
}
