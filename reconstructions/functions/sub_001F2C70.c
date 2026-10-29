/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F2C70(void)
{
    __asm {
        _emit 0x83
        _emit 0xC0
        _emit 0x18
        _emit 0xC3
    }
}
