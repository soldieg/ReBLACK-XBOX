/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00112AB0(void)
{
    __asm {
        _emit 0xC3
    }
}
