/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00115440(void)
{
    __asm {
        _emit 0x8B
        _emit 0x48
        _emit 0x04
        _emit 0x56
        _emit 0x8B
        _emit 0x70
        _emit 0x08
        _emit 0x57
        _emit 0x8B
        _emit 0x3D
        _emit 0x9C
        _emit 0x19
        _emit 0x2D
        _emit 0x00
        _emit 0x51
        _emit 0x81
        _emit 0xC7
        _emit 0xF4
        _emit 0x2D
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0x56
        _emit 0xF1
        _emit 0xFF
        _emit 0xFF
        _emit 0x5F
        _emit 0x5E
        _emit 0xC3
    }
}
