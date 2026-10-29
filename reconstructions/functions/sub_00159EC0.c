/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00159EC0(void)
{
    __asm {
        _emit 0x33
        _emit 0xC9
        _emit 0x89
        _emit 0x48
        _emit 0x08
        _emit 0x88
        _emit 0x48
        _emit 0x0C
        _emit 0x88
        _emit 0x48
        _emit 0x0D
        _emit 0x66
        _emit 0x89
        _emit 0x08
        _emit 0x66
        _emit 0x89
        _emit 0x48
        _emit 0x02
        _emit 0x66
        _emit 0x89
        _emit 0x48
        _emit 0x04
        _emit 0x66
        _emit 0x89
        _emit 0x48
        _emit 0x06
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
