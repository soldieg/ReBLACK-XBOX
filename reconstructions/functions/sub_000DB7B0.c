/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000DB7B0(void)
{
    __asm {
        _emit 0x0F
        _emit 0x5C
        _emit 0xC1
        _emit 0xC3
    }
}
