/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E6080(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x8B
        _emit 0x48
        _emit 0x04
        _emit 0x8B
        _emit 0x41
        _emit 0x04
        _emit 0x8B
        _emit 0xD0
        _emit 0xC1
        _emit 0xEA
        _emit 0x04
        _emit 0xF6
        _emit 0xD2
        _emit 0xF6
        _emit 0xC2
        _emit 0x01
        _emit 0x75
        _emit 0x1A
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xFE
        _emit 0x3D
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x26
        _emit 0x74
        _emit 0x0E
        _emit 0x8B
        _emit 0x41
        _emit 0x48
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x07
        _emit 0x81
        _emit 0x60
        _emit 0x1C
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xFD
        _emit 0xC3
    }
}
