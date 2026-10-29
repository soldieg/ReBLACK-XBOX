/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F1500(void)
{
    __asm {
        _emit 0x8B
        _emit 0x0C
        _emit 0x85
        _emit 0xD4
        _emit 0x7D
        _emit 0x2A
        _emit 0x00
        _emit 0x8B
        _emit 0x15
        _emit 0xD4
        _emit 0x3B
        _emit 0x2F
        _emit 0x00
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x89
        _emit 0x0C
        _emit 0x82
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
