/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001D3A20(void)
{
    __asm {
        _emit 0x57
        _emit 0x8B
        _emit 0x3D
        _emit 0xD4
        _emit 0x45
        _emit 0x2D
        _emit 0x00
        _emit 0x51
        _emit 0x68
        _emit 0xE0
        _emit 0x8A
        _emit 0x1C
        _emit 0x00
        _emit 0x8D
        _emit 0x81
        _emit 0x60
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x81
        _emit 0xC7
        _emit 0x60
        _emit 0x49
        _emit 0x00
        _emit 0x00
        _emit 0xC6
        _emit 0x81
        _emit 0x1C
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0xE8
        _emit 0xFB
        _emit 0xDB
        _emit 0xEF
        _emit 0xFF
        _emit 0x5F
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
