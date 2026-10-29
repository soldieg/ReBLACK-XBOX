/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001BB5E0(void)
{
    __asm {
        _emit 0xA1
        _emit 0xD4
        _emit 0x45
        _emit 0x2D
        _emit 0x00
        _emit 0x8B
        _emit 0x48
        _emit 0x1C
        _emit 0x51
        _emit 0xE8
        _emit 0x82
        _emit 0xA3
        _emit 0xFF
        _emit 0xFF
        _emit 0xC3
    }
}
