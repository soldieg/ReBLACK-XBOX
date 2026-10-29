/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C30D0(void)
{
    __asm {
        _emit 0x57
        _emit 0x8B
        _emit 0xF9
        _emit 0x50
        _emit 0xE8
        _emit 0x97
        _emit 0xC5
        _emit 0xFF
        _emit 0xFF
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x08
        _emit 0x8B
        _emit 0x17
        _emit 0x50
        _emit 0x8B
        _emit 0xCF
        _emit 0xFF
        _emit 0x52
        _emit 0x04
        _emit 0x5F
        _emit 0xC3
    }
}
