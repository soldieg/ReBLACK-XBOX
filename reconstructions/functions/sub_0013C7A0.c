/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0013C7A0(void)
{
    __asm {
        _emit 0x33
        _emit 0xC9
        _emit 0x89
        _emit 0x48
        _emit 0x1C
        _emit 0x89
        _emit 0x48
        _emit 0x20
        _emit 0x89
        _emit 0x48
        _emit 0x24
        _emit 0x89
        _emit 0x48
        _emit 0x28
        _emit 0xC3
    }
}
