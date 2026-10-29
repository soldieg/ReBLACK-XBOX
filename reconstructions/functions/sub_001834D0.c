/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001834D0(void)
{
    __asm {
        _emit 0x89
        _emit 0x48
        _emit 0x40
        _emit 0x8B
        _emit 0x51
        _emit 0x3C
        _emit 0x89
        _emit 0x50
        _emit 0x3C
        _emit 0x89
        _emit 0x41
        _emit 0x3C
        _emit 0xC3
    }
}
