/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_002147B0(void)
{
    __asm {
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x05
        _emit 0xA4
        _emit 0x29
        _emit 0x56
        _emit 0x00
        _emit 0xF3
        _emit 0x0F
        _emit 0x59
        _emit 0x05
        _emit 0x0C
        _emit 0x62
        _emit 0x29
        _emit 0x00
        _emit 0xF3
        _emit 0x0F
        _emit 0x59
        _emit 0x05
        _emit 0x28
        _emit 0x5F
        _emit 0x29
        _emit 0x00
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x05
        _emit 0xB0
        _emit 0x29
        _emit 0x56
        _emit 0x00
        _emit 0xC3
    }
}
