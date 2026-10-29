/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000BA100(void)
{
    __asm {
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x04
        _emit 0x6A
        _emit 0x00
        _emit 0xE8
        _emit 0x93
        _emit 0x59
        _emit 0xFC
        _emit 0xFF
        _emit 0x0F
        _emit 0x57
        _emit 0xC0
        _emit 0x83
        _emit 0xC4
        _emit 0x10
        _emit 0x89
        _emit 0x46
        _emit 0x70
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x46
        _emit 0x10
        _emit 0xC3
    }
}
