/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001A7D30(void)
{
    __asm {
        _emit 0x8B
        _emit 0x00
        _emit 0x8B
        _emit 0x15
        _emit 0x88
        _emit 0x19
        _emit 0x2D
        _emit 0x00
        _emit 0x8D
        _emit 0x0C
        _emit 0x40
        _emit 0x56
        _emit 0x8D
        _emit 0x84
        _emit 0x8A
        _emit 0xAC
        _emit 0x0F
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0x48
        _emit 0x96
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0xC6
        _emit 0xC3
    }
}
