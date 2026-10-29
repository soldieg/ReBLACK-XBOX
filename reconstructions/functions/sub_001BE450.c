/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001BE450(void)
{
    __asm {
        _emit 0x66
        _emit 0x39
        _emit 0x01
        _emit 0x7E
        _emit 0x03
        _emit 0x66
        _emit 0x89
        _emit 0x01
        _emit 0xC3
    }
}
