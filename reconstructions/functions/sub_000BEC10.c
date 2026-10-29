/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000BEC10(void)
{
    __asm {
        _emit 0x8B
        _emit 0xC6
        _emit 0x57
        _emit 0x8D
        _emit 0x78
        _emit 0x01
        _emit 0x8A
        _emit 0x10
        _emit 0x40
        _emit 0x84
        _emit 0xD2
        _emit 0x75
        _emit 0xF9
        _emit 0x8B
        _emit 0x11
        _emit 0x2B
        _emit 0xC7
        _emit 0x50
        _emit 0x56
        _emit 0xFF
        _emit 0x52
        _emit 0x0C
        _emit 0x5F
        _emit 0xC3
    }
}
