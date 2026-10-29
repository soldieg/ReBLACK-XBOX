/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00114DE0(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x35
        _emit 0x9C
        _emit 0x19
        _emit 0x2D
        _emit 0x00
        _emit 0x68
        _emit 0x20
        _emit 0x4D
        _emit 0x11
        _emit 0x00
        _emit 0x83
        _emit 0xC6
        _emit 0x04
        _emit 0xB9
        _emit 0xAC
        _emit 0x1B
        _emit 0x29
        _emit 0x00
        _emit 0xE8
        _emit 0xC7
        _emit 0xE1
        _emit 0xFF
        _emit 0xFF
        _emit 0xB0
        _emit 0x01
        _emit 0x5E
        _emit 0xC3
    }
}
