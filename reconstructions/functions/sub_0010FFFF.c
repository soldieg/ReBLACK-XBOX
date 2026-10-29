/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0010FFFF(void)
{
    __asm {
        _emit 0x50
    }
}
