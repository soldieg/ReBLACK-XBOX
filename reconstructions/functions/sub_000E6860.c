/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E6860(void)
{
    __asm {
        _emit 0x53
        _emit 0x8B
        _emit 0xD8
        _emit 0xE8
        _emit 0xC8
        _emit 0xD2
        _emit 0xFF
        _emit 0xFF
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x0F
        _emit 0x8D
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8B
        _emit 0xC8
        _emit 0xE8
        _emit 0x99
        _emit 0xF0
        _emit 0xFF
        _emit 0xFF
        _emit 0x85
        _emit 0xC0
        _emit 0x75
        _emit 0xF5
        _emit 0x5B
        _emit 0xC3
    }
}
