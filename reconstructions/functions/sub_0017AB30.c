/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0017AB30(void)
{
    __asm {
        _emit 0x8B
        _emit 0x40
        _emit 0x5C
        _emit 0x85
        _emit 0xC0
        _emit 0x75
        _emit 0x01
        _emit 0xC3
        _emit 0x51
        _emit 0x50
        _emit 0xE8
        _emit 0xF1
        _emit 0x88
        _emit 0xF3
        _emit 0xFF
        _emit 0xC3
    }
}
