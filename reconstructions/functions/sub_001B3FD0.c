/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B3FD0(void)
{
    __asm {
        _emit 0x8A
        _emit 0x81
        _emit 0x1C
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x84
        _emit 0xC0
        _emit 0x0F
        _emit 0x94
        _emit 0xC0
        _emit 0x88
        _emit 0x81
        _emit 0x1C
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
