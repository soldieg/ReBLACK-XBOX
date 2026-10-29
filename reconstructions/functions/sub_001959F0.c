/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001959F0(void)
{
    __asm {
        _emit 0x50
        _emit 0xE8
        _emit 0x2A
        _emit 0x7F
        _emit 0xFF
        _emit 0xFF
        _emit 0xC3
    }
}
