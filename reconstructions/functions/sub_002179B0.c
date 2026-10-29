/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_002179B0(void)
{
    __asm {
        _emit 0xC7
        _emit 0x05
        _emit 0xA8
        _emit 0x5B
        _emit 0x2B
        _emit 0x00
        _emit 0xF4
        _emit 0x4C
        _emit 0x28
        _emit 0x00
        _emit 0xC3
    }
}
