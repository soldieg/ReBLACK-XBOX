/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E3900(void)
{
    __asm {
        _emit 0x33
        _emit 0xC0
        _emit 0xA3
        _emit 0xE0
        _emit 0x42
        _emit 0x2F
        _emit 0x00
        _emit 0xA3
        _emit 0xE4
        _emit 0x42
        _emit 0x2F
        _emit 0x00
        _emit 0xC3
    }
}
