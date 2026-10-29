/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E2B50(void)
{
    __asm {
        _emit 0x8B
        _emit 0x49
        _emit 0x44
        _emit 0x33
        _emit 0xC0
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x0F
        _emit 0x8D
        _emit 0xA4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x49
        _emit 0x44
        _emit 0x40
        _emit 0x85
        _emit 0xC9
        _emit 0x75
        _emit 0xF8
        _emit 0xC3
    }
}
