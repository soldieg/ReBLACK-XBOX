/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C3660(void)
{
    __asm {
        _emit 0x8D
        _emit 0x44
        _emit 0x40
        _emit 0x03
        _emit 0xC1
        _emit 0xE0
        _emit 0x05
        _emit 0xC3
    }
}
