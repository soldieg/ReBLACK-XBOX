/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B6680(void)
{
    __asm {
        _emit 0x8B
        _emit 0x88
        _emit 0x24
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x11
        _emit 0xFF
        _emit 0x22
    }
}
