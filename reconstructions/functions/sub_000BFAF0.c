/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000BFAF0(void)
{
    __asm {
        _emit 0x66
        _emit 0xA3
        _emit 0xFC
        _emit 0xC8
        _emit 0x2A
        _emit 0x00
        _emit 0x66
        _emit 0x89
        _emit 0x0D
        _emit 0x00
        _emit 0xC9
        _emit 0x2A
        _emit 0x00
        _emit 0xC3
    }
}
