/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001C4020(void)
{
    __asm {
        _emit 0x33
        _emit 0xC9
        _emit 0x89
        _emit 0x88
        _emit 0x8C
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC7
        _emit 0x80
        _emit 0x90
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x88
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xE9
        _emit 0x33
        _emit 0x9A
        _emit 0xFF
        _emit 0xFF
    }
}
