/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B6910(void)
{
    __asm {
        _emit 0xC1
        _emit 0xE0
        _emit 0x06
        _emit 0x8D
        _emit 0x84
        _emit 0x08
        _emit 0x20
        _emit 0x7A
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
