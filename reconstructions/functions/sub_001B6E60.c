/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B6E60(void)
{
    __asm {
        _emit 0x0F
        _emit 0x57
        _emit 0xC0
        _emit 0x32
        _emit 0xC9
        _emit 0x88
        _emit 0x48
        _emit 0x58
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x40
        _emit 0x50
        _emit 0x88
        _emit 0x48
        _emit 0x59
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
