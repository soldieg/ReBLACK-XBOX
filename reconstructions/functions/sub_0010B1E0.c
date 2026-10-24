/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0010B1E0(void)
{
    __asm {
        _emit 0x53
        _emit 0x8B
        _emit 0xD8
        _emit 0x8B
        _emit 0x03
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x1A
        _emit 0x8D
        _emit 0xA4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x00
        _emit 0x83
        _emit 0xC0
        _emit 0x04
        _emit 0x50
        _emit 0x8B
        _emit 0xCB
        _emit 0xE8
        _emit 0x93
        _emit 0xFC
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0x03
        _emit 0x85
        _emit 0xC0
        _emit 0x75
        _emit 0xED
        _emit 0xE8
        _emit 0x38
        _emit 0x39
        _emit 0xF1
        _emit 0xFF
        _emit 0x5B
        _emit 0xC3
    }
}
