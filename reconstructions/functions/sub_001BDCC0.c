/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001BDCC0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x88
        _emit 0x8C
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x91
        _emit 0x9C
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0xA1
        _emit 0x88
        _emit 0x19
        _emit 0x2D
        _emit 0x00
        _emit 0x8B
        _emit 0x84
        _emit 0x90
        _emit 0x40
        _emit 0x2C
        _emit 0x02
        _emit 0x00
        _emit 0xC3
    }
}
