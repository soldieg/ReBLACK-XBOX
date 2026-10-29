/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F2AA0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x08
        _emit 0x8B
        _emit 0x50
        _emit 0x18
        _emit 0xC1
        _emit 0xE1
        _emit 0x06
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x44
        _emit 0x11
        _emit 0xC0
        _emit 0xC3
    }
}
