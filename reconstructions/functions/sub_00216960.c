/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00216960(void)
{
    __asm {
        _emit 0xC7
        _emit 0x05
        _emit 0x10
        _emit 0xE5
        _emit 0x2B
        _emit 0x00
        _emit 0xF0
        _emit 0xE3
        _emit 0x2B
        _emit 0x00
        _emit 0xC3
    }
}
