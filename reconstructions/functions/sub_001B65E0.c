/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B65E0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x88
        _emit 0xA8
        _emit 0x1F
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xC9
        _emit 0x75
        _emit 0x0A
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x89
        _emit 0x88
        _emit 0xA8
        _emit 0x1F
        _emit 0x00
        _emit 0x00
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
