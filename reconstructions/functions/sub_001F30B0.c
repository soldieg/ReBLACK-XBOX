/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F30B0(void)
{
    __asm {
        _emit 0x89
        _emit 0x88
        _emit 0xFC
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
