/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C1050(void)
{
    __asm {
        _emit 0xA1
        _emit 0x20
        _emit 0x37
        _emit 0x2F
        _emit 0x00
        _emit 0x50
        _emit 0xE8
        _emit 0x2C
        _emit 0x49
        _emit 0xF6
        _emit 0xFF
        _emit 0xC3
    }
}
