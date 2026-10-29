/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000AC800(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x0C
        _emit 0x8B
        _emit 0x08
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x51
        _emit 0x56
        _emit 0xE8
        _emit 0x2E
        _emit 0xFC
        _emit 0xFF
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x08
        _emit 0x8B
        _emit 0xC6
        _emit 0x5E
        _emit 0xC3
    }
}
