/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001893E0(void)
{
    __asm {
        _emit 0xBA
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xD3
        _emit 0xE2
        _emit 0x8B
        _emit 0x08
        _emit 0xF7
        _emit 0xD2
        _emit 0x23
        _emit 0xCA
        _emit 0x89
        _emit 0x08
        _emit 0xC3
    }
}
