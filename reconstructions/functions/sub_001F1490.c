/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F1490(void)
{
    __asm {
        _emit 0x69
        _emit 0xC0
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x05
        _emit 0xF0
        _emit 0x7A
        _emit 0x2A
        _emit 0x00
        _emit 0xC3
    }
}
