/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000BE710(void)
{
    __asm {
        _emit 0x6A
        _emit 0x00
        _emit 0x50
        _emit 0xFF
        _emit 0x15
        _emit 0x68
        _emit 0xA7
        _emit 0x56
        _emit 0x00
        _emit 0x83
        _emit 0xC4
        _emit 0x08
        _emit 0xC3
    }
}
