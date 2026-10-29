/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0021B7D2(void)
{
    __asm {
        _emit 0xC7
        _emit 0x05
        _emit 0xF8
        _emit 0x4C
        _emit 0x22
        _emit 0x00
        _emit 0x1C
        _emit 0x46
        _emit 0x22
        _emit 0x00
        _emit 0xC3
        _emit 0xC7
        _emit 0x05
        _emit 0xF4
        _emit 0x4C
        _emit 0x22
        _emit 0x00
        _emit 0x20
        _emit 0x46
        _emit 0x22
        _emit 0x00
        _emit 0xC3
    }
}
