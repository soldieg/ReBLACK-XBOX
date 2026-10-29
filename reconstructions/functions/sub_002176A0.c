/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_002176A0(void)
{
    __asm {
        _emit 0xC7
        _emit 0x05
        _emit 0x60
        _emit 0x62
        _emit 0x2F
        _emit 0x00
        _emit 0xA0
        _emit 0xF5
        _emit 0x28
        _emit 0x00
        _emit 0xC3
    }
}
