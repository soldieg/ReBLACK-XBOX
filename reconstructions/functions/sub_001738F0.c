/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001738F0(void)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8B
        _emit 0xF8
        _emit 0x8D
        _emit 0xB7
        _emit 0x30
        _emit 0x30
        _emit 0x03
        _emit 0x00
        _emit 0xE8
        _emit 0x51
        _emit 0x8C
        _emit 0xFF
        _emit 0xFF
        _emit 0x81
        _emit 0xC7
        _emit 0xD0
        _emit 0x06
        _emit 0x05
        _emit 0x00
        _emit 0x57
        _emit 0xE8
        _emit 0x45
        _emit 0xFD
        _emit 0xFF
        _emit 0xFF
        _emit 0x5F
        _emit 0x5E
        _emit 0xC3
    }
}
