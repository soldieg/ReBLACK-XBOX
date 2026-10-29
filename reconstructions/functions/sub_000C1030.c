/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C1030(void)
{
    __asm {
        _emit 0x6A
        _emit 0xFE
        _emit 0xE8
        _emit 0xC0
        _emit 0x44
        _emit 0xF6
        _emit 0xFF
        _emit 0xC3
    }
}
