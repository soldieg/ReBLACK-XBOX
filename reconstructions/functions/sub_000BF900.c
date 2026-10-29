/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000BF900(void)
{
    __asm {
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
