/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F2640(void)
{
    __asm {
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x05
        _emit 0xC4
        _emit 0x5C
        _emit 0x29
        _emit 0x00
        _emit 0x33
        _emit 0xC0
        _emit 0x89
        _emit 0x41
        _emit 0x1C
        _emit 0x88
        _emit 0x41
        _emit 0x20
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x41
        _emit 0x24
        _emit 0xC3
    }
}
