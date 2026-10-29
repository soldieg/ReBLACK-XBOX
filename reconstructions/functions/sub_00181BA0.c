/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00181BA0(void)
{
    __asm {
        _emit 0x33
        _emit 0xC9
        _emit 0x88
        _emit 0x48
        _emit 0x08
        _emit 0x89
        _emit 0x48
        _emit 0x04
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
