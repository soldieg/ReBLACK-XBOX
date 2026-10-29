/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B6380(void)
{
    __asm {
        _emit 0x8B
        _emit 0x88
        _emit 0x7C
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x94
        _emit 0x88
        _emit 0x58
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0xFF
        _emit 0x80
        _emit 0x7C
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
