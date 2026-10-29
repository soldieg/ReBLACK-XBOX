/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B4B40(void)
{
    __asm {
        _emit 0x80
        _emit 0x78
        _emit 0x69
        _emit 0x01
        _emit 0x0F
        _emit 0x97
        _emit 0xC0
        _emit 0xC3
    }
}
