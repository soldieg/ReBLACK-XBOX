/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000BF9F0(void)
{
    __asm {
        _emit 0xFF
        _emit 0x48
        _emit 0x44
        _emit 0xC3
    }
}
