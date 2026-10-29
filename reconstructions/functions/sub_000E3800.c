/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E3800(void)
{
    __asm {
        _emit 0x8B
        _emit 0x08
        _emit 0x0F
        _emit 0xB7
        _emit 0x51
        _emit 0x04
        _emit 0x39
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x0F
        _emit 0x92
        _emit 0xC0
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
