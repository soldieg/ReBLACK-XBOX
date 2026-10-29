/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0012C310(void)
{
    __asm {
        _emit 0x8B
        _emit 0x0D
        _emit 0xE4
        _emit 0x12
        _emit 0x2D
        _emit 0x00
        _emit 0x0F
        _emit 0xBE
        _emit 0xC0
        _emit 0x69
        _emit 0xC0
        _emit 0xA8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x84
        _emit 0x08
        _emit 0x8C
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
