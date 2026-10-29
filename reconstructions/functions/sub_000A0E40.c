/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000A0E40(void)
{
    __asm {
        _emit 0x53
        _emit 0x8B
        _emit 0xDC
        _emit 0x51
        _emit 0x83
        _emit 0xE4
        _emit 0xF0
        _emit 0x83
        _emit 0xC4
        _emit 0x04
    }
}
