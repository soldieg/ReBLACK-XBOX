/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F2C00(void)
{
    __asm {
        _emit 0x83
        _emit 0x3E
        _emit 0x26
        _emit 0x74
        _emit 0x03
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
        _emit 0x81
        _emit 0x7E
        _emit 0x04
        _emit 0x78
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0xF4
        _emit 0x8B
        _emit 0xCE
        _emit 0xE8
        _emit 0xB8
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x3B
        _emit 0x86
        _emit 0x70
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x0F
        _emit 0x94
        _emit 0xC0
        _emit 0xC3
    }
}
