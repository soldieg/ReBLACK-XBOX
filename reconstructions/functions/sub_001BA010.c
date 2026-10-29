/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001BA010(void)
{
    __asm {
        _emit 0x33
        _emit 0xC9
        _emit 0x89
        _emit 0x48
        _emit 0x10
        _emit 0x88
        _emit 0x48
        _emit 0x14
        _emit 0x88
        _emit 0x48
        _emit 0x15
        _emit 0x89
        _emit 0x48
        _emit 0x08
        _emit 0x89
        _emit 0x48
        _emit 0x0C
        _emit 0x88
        _emit 0x48
        _emit 0x16
        _emit 0xC3
    }
}
