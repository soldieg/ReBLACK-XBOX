/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0018EC30(void)
{
    __asm {
        _emit 0x8B
        _emit 0x40
        _emit 0x20
        _emit 0x85
        _emit 0xC0
        _emit 0x75
        _emit 0x01
        _emit 0xC3
        _emit 0x8B
        _emit 0x00
        _emit 0x8B
        _emit 0x0D
        _emit 0x88
        _emit 0x19
        _emit 0x2D
        _emit 0x00
        _emit 0x8B
        _emit 0x51
        _emit 0x70
        _emit 0x8B
        _emit 0x4A
        _emit 0x2C
        _emit 0x8D
        _emit 0x04
        _emit 0x80
        _emit 0xC1
        _emit 0xE0
        _emit 0x04
        _emit 0x03
        _emit 0xC1
        _emit 0xC3
    }
}
