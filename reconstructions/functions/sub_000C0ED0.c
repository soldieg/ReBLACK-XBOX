/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C0ED0(void)
{
    __asm {
        _emit 0x50
        _emit 0xE8
        _emit 0xCA
        _emit 0x17
        _emit 0xF9
        _emit 0xFF
        _emit 0x8B
        _emit 0xC8
        _emit 0xE8
        _emit 0x53
        _emit 0x0C
        _emit 0xF9
        _emit 0xFF
        _emit 0xC3
    }
}
