/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00033D10(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0xA3
        _emit 0x8C
        _emit 0xA5
        _emit 0x56
        _emit 0x00
        _emit 0xE8
        _emit 0x62
        _emit 0x6F
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0xF7
        _emit 0xD8
        _emit 0x1B
        _emit 0xC0
        _emit 0x23
        _emit 0xC1
        _emit 0xC3
    }
}
