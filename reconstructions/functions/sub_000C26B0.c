/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C26B0(void)
{
    __asm {
        _emit 0x0F
        _emit 0x57
        _emit 0xC0
        _emit 0x0F
        _emit 0x2F
        _emit 0xC1
        _emit 0x76
        _emit 0x0D
        _emit 0xF3
        _emit 0x0F
        _emit 0x5C
        _emit 0xC1
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x80
        _emit 0xB4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x88
        _emit 0xB4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
