/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000A3A2F(void)
{
    __asm {
        _emit 0x33
        _emit 0xC0
    }
}
