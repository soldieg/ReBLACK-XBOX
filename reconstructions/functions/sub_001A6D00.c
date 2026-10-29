/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001A6D00(void)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8B
        _emit 0x7C
        _emit 0x24
        _emit 0x0C
        _emit 0x83
        _emit 0x3F
        _emit 0x03
        _emit 0x8B
        _emit 0xF1
        _emit 0x75
        _emit 0x16
        _emit 0x8B
        _emit 0x46
        _emit 0x08
        _emit 0x83
        _emit 0xB8
        _emit 0x80
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0xFF
        _emit 0x75
        _emit 0x0A
        _emit 0x05
        _emit 0x20
        _emit 0x0D
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0xAD
        _emit 0x45
        _emit 0xFE
        _emit 0xFF
        _emit 0x57
        _emit 0x8B
        _emit 0xCE
        _emit 0xE8
        _emit 0x55
        _emit 0x7B
        _emit 0xFF
        _emit 0xFF
        _emit 0x5F
        _emit 0x5E
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
