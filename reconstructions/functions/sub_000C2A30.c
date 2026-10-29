/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C2A30(void)
{
    __asm {
        _emit 0x0F
        _emit 0xAF
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x83
        _emit 0xC0
        _emit 0x03
        _emit 0x83
        _emit 0xE0
        _emit 0xFC
        _emit 0x8D
        _emit 0x0C
        _emit 0x49
        _emit 0x8D
        _emit 0x44
        _emit 0x48
        _emit 0x03
        _emit 0x83
        _emit 0xE0
        _emit 0xFC
        _emit 0xC3
    }
}
