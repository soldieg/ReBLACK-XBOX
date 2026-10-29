/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C21A0(void)
{
    __asm {
        _emit 0x33
        _emit 0xC0
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
