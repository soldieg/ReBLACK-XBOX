/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C4750(void)
{
    __asm {
        _emit 0xA3
        _emit 0x30
        _emit 0xEF
        _emit 0x56
        _emit 0x00
        _emit 0xC3
    }
}
