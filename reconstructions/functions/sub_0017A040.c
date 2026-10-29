/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0017A040(void)
{
    __asm {
        _emit 0x8B
        _emit 0x48
        _emit 0x10
        _emit 0xC7
        _emit 0x04
        _emit 0x91
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
