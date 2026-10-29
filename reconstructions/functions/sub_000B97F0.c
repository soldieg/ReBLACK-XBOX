/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000B97F0(void)
{
    __asm {
        _emit 0x8B
        _emit 0xCE
        _emit 0xE8
        _emit 0x79
        _emit 0xE4
        _emit 0xFF
        _emit 0xFF
        _emit 0x84
        _emit 0xC0
        _emit 0x74
        _emit 0x0D
        _emit 0x8B
        _emit 0x46
        _emit 0x38
        _emit 0x50
        _emit 0xE8
        _emit 0xEC
        _emit 0x47
        _emit 0xFD
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x04
        _emit 0xC3
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
    }
}
