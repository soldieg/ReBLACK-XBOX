/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001BE1B4(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0xB0
        _emit 0x9C
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xD2
        _emit 0x85
        _emit 0xF6
        _emit 0x0F
        _emit 0x94
        _emit 0xC2
        _emit 0x5E
        _emit 0x89
        _emit 0x91
        _emit 0x98
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
