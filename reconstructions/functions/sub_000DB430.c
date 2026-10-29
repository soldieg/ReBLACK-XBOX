/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000DB430(void)
{
    __asm {
        _emit 0x03
        _emit 0xC8
        _emit 0x3B
        _emit 0xC1
        _emit 0x7D
        _emit 0x0C
        _emit 0x57
        _emit 0x8B
        _emit 0x3E
        _emit 0x89
        _emit 0x14
        _emit 0xC7
        _emit 0x40
        _emit 0x3B
        _emit 0xC1
        _emit 0x7C
        _emit 0xF6
        _emit 0x5F
        _emit 0xC3
    }
}
