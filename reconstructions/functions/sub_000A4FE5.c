/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000A4FE5(void)
{
    __asm {
        _emit 0x33
        _emit 0xF6
    }
}
