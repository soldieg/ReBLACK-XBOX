/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F2280(void)
{
    __asm {
        _emit 0xC2
        _emit 0x1C
        _emit 0x00
    }
}
