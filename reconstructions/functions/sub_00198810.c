/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00198810(void)
{
    __asm {
        _emit 0x8B
        _emit 0xC1
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x11
        _emit 0x83
        _emit 0xEA
        _emit 0x0A
        _emit 0x74
        _emit 0x0D
        _emit 0x4A
        _emit 0x75
        _emit 0x05
        _emit 0xE8
        _emit 0x6B
        _emit 0xFE
        _emit 0xFF
        _emit 0xFF
        _emit 0x32
        _emit 0xC0
        _emit 0xC2
        _emit 0x04
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x16
        _emit 0xE8
        _emit 0x5D
        _emit 0x9C
        _emit 0xFF
        _emit 0xFF
        _emit 0xB0
        _emit 0x01
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
