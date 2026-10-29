/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C0690(void)
{
    __asm {
        _emit 0x83
        _emit 0xC0
        _emit 0x08
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x0B
        _emit 0x8D
        _emit 0x51
        _emit 0xFF
        _emit 0x8D
        _emit 0x44
        _emit 0x08
        _emit 0xFF
        _emit 0xF7
        _emit 0xD2
        _emit 0x23
        _emit 0xC2
        _emit 0x0F
        _emit 0xAF
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x03
        _emit 0xC1
        _emit 0xC3
    }
}
