/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B9560(void)
{
    __asm {
        _emit 0x0F
        _emit 0x57
        _emit 0xC0
        _emit 0x33
        _emit 0xC0
        _emit 0x88
        _emit 0x41
        _emit 0x15
        _emit 0x89
        _emit 0x41
        _emit 0x08
        _emit 0x89
        _emit 0x41
        _emit 0x0C
        _emit 0x88
        _emit 0x41
        _emit 0x16
        _emit 0x89
        _emit 0x41
        _emit 0x34
        _emit 0x8B
        _emit 0x41
        _emit 0x20
        _emit 0xC7
        _emit 0x41
        _emit 0x38
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x41
        _emit 0x3C
        _emit 0x83
        _emit 0xC1
        _emit 0x20
        _emit 0xFF
        _emit 0x50
        _emit 0x08
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
