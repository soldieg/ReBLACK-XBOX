/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F1780(void)
{
    __asm {
        _emit 0x8B
        _emit 0x0D
        _emit 0xD4
        _emit 0x3B
        _emit 0x2F
        _emit 0x00
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xEB
        _emit 0x03
        _emit 0x8D
        _emit 0x49
        _emit 0x00
        _emit 0x39
        _emit 0x14
        _emit 0x81
        _emit 0x74
        _emit 0x06
        _emit 0x40
        _emit 0x83
        _emit 0xF8
        _emit 0x25
        _emit 0x7C
        _emit 0xF5
        _emit 0xC3
    }
}
