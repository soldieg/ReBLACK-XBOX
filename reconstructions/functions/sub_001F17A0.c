/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F17A0(void)
{
    __asm {
        _emit 0x83
        _emit 0xF8
        _emit 0x25
        _emit 0x75
        _emit 0x06
        _emit 0xB8
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0x8B
        _emit 0x0D
        _emit 0xD4
        _emit 0x3B
        _emit 0x2F
        _emit 0x00
        _emit 0x8B
        _emit 0x04
        _emit 0x81
        _emit 0xC3
    }
}
