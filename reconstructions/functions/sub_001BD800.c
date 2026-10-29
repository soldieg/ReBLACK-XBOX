/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001BD800(void)
{
    __asm {
        _emit 0x0F
        _emit 0x57
        _emit 0xC0
        _emit 0x8B
        _emit 0x81
        _emit 0x8C
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x81
        _emit 0xA0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x81
        _emit 0xA4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x90
        _emit 0x08
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x51
        _emit 0x18
        _emit 0x8B
        _emit 0x80
        _emit 0x0C
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x41
        _emit 0x1C
        _emit 0xC3
    }
}
