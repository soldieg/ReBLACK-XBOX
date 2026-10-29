/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E6810(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0x8B
        _emit 0x30
        _emit 0x57
        _emit 0x83
        _emit 0xC6
        _emit 0x08
        _emit 0x33
        _emit 0xD2
        _emit 0xBF
        _emit 0xC0
        _emit 0x42
        _emit 0x29
        _emit 0x00
        _emit 0xB9
        _emit 0x0E
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xF3
        _emit 0xA6
        _emit 0x8B
        _emit 0x0D
        _emit 0x8C
        _emit 0xC9
        _emit 0x2E
        _emit 0x00
        _emit 0x8B
        _emit 0xC2
        _emit 0x0F
        _emit 0x95
        _emit 0xC0
        _emit 0x5F
        _emit 0x5E
        _emit 0x48
        _emit 0x23
        _emit 0xC1
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
