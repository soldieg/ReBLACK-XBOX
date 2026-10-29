/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0020006E(void)
{
    __asm {
        _emit 0x5F
        _emit 0x5E
        _emit 0x5B
        _emit 0x8B
        _emit 0xE5
        _emit 0x5D
        _emit 0xC3
    }
}
