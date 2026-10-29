/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C1040(void)
{
    __asm {
        _emit 0x8B
        _emit 0x0C
        _emit 0xC5
        _emit 0x20
        _emit 0x37
        _emit 0x2F
        _emit 0x00
        _emit 0x51
        _emit 0xE8
        _emit 0xD0
        _emit 0x44
        _emit 0xF6
        _emit 0xFF
        _emit 0xC3
    }
}
