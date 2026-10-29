/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C1000(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x48
        _emit 0x04
        _emit 0x51
        _emit 0xFF
        _emit 0x10
        _emit 0x83
        _emit 0xC4
        _emit 0x04
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
