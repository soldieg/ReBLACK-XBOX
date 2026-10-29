/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F45C0(void)
{
    __asm {
        _emit 0x83
        _emit 0x49
        _emit 0x0C
        _emit 0x01
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
