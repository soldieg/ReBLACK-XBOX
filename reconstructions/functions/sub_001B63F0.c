/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B63F0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x81
        _emit 0x54
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xF8
        _emit 0xFF
        _emit 0x74
        _emit 0x10
        _emit 0x8B
        _emit 0x8C
        _emit 0x81
        _emit 0x30
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x05
        _emit 0x8B
        _emit 0x01
        _emit 0xFF
        _emit 0x60
        _emit 0x10
        _emit 0xC2
        _emit 0x1C
        _emit 0x00
    }
}
