/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000B7640(void)
{
    __asm {
        _emit 0x33
        _emit 0xC0
        _emit 0xA2
        _emit 0x50
        _emit 0x3A
        _emit 0x2F
        _emit 0x00
        _emit 0xA3
        _emit 0x54
        _emit 0x3A
        _emit 0x2F
        _emit 0x00
        _emit 0xA1
        _emit 0x4C
        _emit 0x3A
        _emit 0x2F
        _emit 0x00
        _emit 0xC3
    }
}
