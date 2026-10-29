/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000BF660(void)
{
    __asm {
        _emit 0x8B
        _emit 0x51
        _emit 0x0C
        _emit 0xC1
        _emit 0xE0
        _emit 0x05
        _emit 0x03
        _emit 0xC2
        _emit 0xC3
    }
}
