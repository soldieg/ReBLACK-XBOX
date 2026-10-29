/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B6350(void)
{
    __asm {
        _emit 0x8A
        _emit 0x80
        _emit 0x85
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
