/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000CAD3B(void)
{
    __asm {
        _emit 0x56
        _emit 0x53
        _emit 0x8B
        _emit 0xF0
        _emit 0xE8
        _emit 0x0C
        _emit 0x7F
        _emit 0xFF
        _emit 0xFF
        _emit 0x5E
        _emit 0xC3
    }
}
