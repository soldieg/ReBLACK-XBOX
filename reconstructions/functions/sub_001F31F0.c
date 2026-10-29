/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F31F0(void)
{
    __asm {
        _emit 0x33
        _emit 0xC9
        _emit 0xC7
        _emit 0x40
        _emit 0x0C
        _emit 0x09
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x48
        _emit 0x28
        _emit 0x88
        _emit 0x88
        _emit 0x15
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
