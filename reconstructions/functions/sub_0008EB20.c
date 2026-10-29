/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0008EB20(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x51
        _emit 0xE8
        _emit 0x06
        _emit 0xF5
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x02
        _emit 0x83
        _emit 0xC4
        _emit 0x04
        _emit 0x8B
        _emit 0xC1
        _emit 0xC3
    }
}
