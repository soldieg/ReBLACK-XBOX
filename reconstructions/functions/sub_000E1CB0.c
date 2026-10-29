/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E1CB0(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x35
        _emit 0xE8
        _emit 0x42
        _emit 0x2F
        _emit 0x00
        _emit 0x8D
        _emit 0x50
        _emit 0x01
        _emit 0x3B
        _emit 0xD6
        _emit 0x7E
        _emit 0x06
        _emit 0x89
        _emit 0x15
        _emit 0xE8
        _emit 0x42
        _emit 0x2F
        _emit 0x00
        _emit 0x8B
        _emit 0x15
        _emit 0xE4
        _emit 0x42
        _emit 0x2F
        _emit 0x00
        _emit 0x8B
        _emit 0x34
        _emit 0x82
        _emit 0x89
        _emit 0x0C
        _emit 0x82
        _emit 0x8B
        _emit 0x01
        _emit 0xFF
        _emit 0x10
        _emit 0x8B
        _emit 0x16
        _emit 0x8B
        _emit 0xCE
        _emit 0x5E
        _emit 0xFF
        _emit 0x62
        _emit 0x04
    }
}
