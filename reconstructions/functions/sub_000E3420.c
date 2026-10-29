/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E3420(void)
{
    __asm {
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
    }
}
