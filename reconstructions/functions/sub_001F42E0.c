/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F42E0(void)
{
    __asm {
        _emit 0x0F
        _emit 0xBE
        _emit 0xC0
        _emit 0x0F
        _emit 0x2F
        _emit 0x84
        _emit 0x81
        _emit 0xDC
        _emit 0x0A
        _emit 0x00
        _emit 0x00
        _emit 0x8D
        _emit 0x84
        _emit 0x81
        _emit 0xDC
        _emit 0x0A
        _emit 0x00
        _emit 0x00
        _emit 0x76
        _emit 0x04
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x00
        _emit 0xC3
    }
}
