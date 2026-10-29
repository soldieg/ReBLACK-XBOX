/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00156F00(void)
{
    __asm {
        _emit 0x89
        _emit 0x08
        _emit 0xC3
    }
}
