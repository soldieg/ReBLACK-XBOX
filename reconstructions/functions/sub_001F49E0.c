/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F49E0(void)
{
    __asm {
        _emit 0x0F
        _emit 0x59
        _emit 0xC1
        _emit 0xC3
    }
}
