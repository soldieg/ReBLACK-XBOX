/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000BF9D0(void)
{
    __asm {
        _emit 0xC6
        _emit 0x41
        _emit 0x4C
        _emit 0x00
        _emit 0xC3
    }
}
