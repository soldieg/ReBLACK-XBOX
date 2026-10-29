/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00187760(void)
{
    __asm {
        _emit 0x32
        _emit 0xC9
        _emit 0x0F
        _emit 0x57
        _emit 0xC0
        _emit 0x0F
        _emit 0x29
        _emit 0x40
        _emit 0x30
        _emit 0x0F
        _emit 0x57
        _emit 0xC0
        _emit 0x88
        _emit 0x48
        _emit 0x7C
        _emit 0x88
        _emit 0x48
        _emit 0x7F
        _emit 0x88
        _emit 0x88
        _emit 0x81
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x40
        _emit 0x74
        _emit 0xC3
    }
}
