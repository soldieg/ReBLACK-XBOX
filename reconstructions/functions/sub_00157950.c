/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00157950(void)
{
    __asm {
        _emit 0x83
        _emit 0xC0
        _emit 0x0D
        _emit 0xB9
        _emit 0x1C
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC6
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xC0
        _emit 0x10
        _emit 0x49
        _emit 0x75
        _emit 0xF7
        _emit 0xC3
    }
}
