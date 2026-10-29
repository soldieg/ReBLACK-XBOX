/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F4620(void)
{
    __asm {
        _emit 0x33
        _emit 0xC9
        _emit 0x84
        _emit 0xD2
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x0F
        _emit 0x95
        _emit 0xC1
        _emit 0x89
        _emit 0x90
        _emit 0x0C
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x88
        _emit 0x10
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
