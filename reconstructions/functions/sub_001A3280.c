/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001A3280(void)
{
    __asm {
        _emit 0x8B
        _emit 0xC1
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x83
        _emit 0x39
        _emit 0x13
        _emit 0x74
        _emit 0x05
        _emit 0x32
        _emit 0xC0
        _emit 0xC2
        _emit 0x04
        _emit 0x00
        _emit 0xC6
        _emit 0x40
        _emit 0x09
        _emit 0x00
        _emit 0xE8
        _emit 0x57
        _emit 0x5E
        _emit 0xFF
        _emit 0xFF
        _emit 0xB0
        _emit 0x01
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
