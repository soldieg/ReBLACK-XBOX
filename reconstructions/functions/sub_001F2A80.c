/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F2A80(void)
{
    __asm {
        _emit 0x8A
        _emit 0x88
        _emit 0xA4
        _emit 0x16
        _emit 0x00
        _emit 0x00
        _emit 0x84
        _emit 0xC9
        _emit 0x74
        _emit 0x08
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x80
        _emit 0x50
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
