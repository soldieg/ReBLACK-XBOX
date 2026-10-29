/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B3F90(void)
{
    __asm {
        _emit 0xC2
        _emit 0x1C
        _emit 0x00
    }
}
