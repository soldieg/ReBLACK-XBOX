/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001130E0(void)
{
    __asm {
        _emit 0xA1
        _emit 0x14
        _emit 0x41
        _emit 0x2F
        _emit 0x00
        _emit 0xC3
    }
}
