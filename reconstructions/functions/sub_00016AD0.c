/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00016AD0(void)
{
    __asm {
        _emit 0x32
        _emit 0xC0
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
