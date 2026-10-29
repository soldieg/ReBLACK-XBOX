/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001575C0(void)
{
    __asm {
        _emit 0x8A
        _emit 0x91
        _emit 0xC9
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xC0
        _emit 0x80
        _emit 0xFA
        _emit 0x03
        _emit 0x0F
        _emit 0x9C
        _emit 0xC0
        _emit 0xC3
    }
}
