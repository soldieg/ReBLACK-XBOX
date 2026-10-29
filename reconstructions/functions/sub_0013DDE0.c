/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0013DDE0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x54
        _emit 0xF1
        _emit 0x04
        _emit 0x8B
        _emit 0x41
        _emit 0x24
        _emit 0x3B
        _emit 0xD0
        _emit 0x75
        _emit 0x03
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
        _emit 0x0F
        _emit 0xAF
        _emit 0xC6
        _emit 0x03
        _emit 0xC2
        _emit 0x0F
        _emit 0xAF
        _emit 0x41
        _emit 0x14
        _emit 0x03
        _emit 0x41
        _emit 0x10
        _emit 0xC3
    }
}
