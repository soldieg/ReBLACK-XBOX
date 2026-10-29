/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0013C0C0(void)
{
    __asm {
        _emit 0x0F
        _emit 0xB7
        _emit 0x44
        _emit 0x48
        _emit 0x3C
        _emit 0xC3
    }
}
