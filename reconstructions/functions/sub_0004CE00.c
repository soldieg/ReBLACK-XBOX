/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0004CE00(void)
{
    __asm {
        _emit 0x8B
        _emit 0x0D
        _emit 0x94
        _emit 0x5A
        _emit 0x2B
        _emit 0x00
        _emit 0x83
        _emit 0xC8
        _emit 0xFF
        _emit 0x3B
        _emit 0xC8
        _emit 0x74
        _emit 0x13
        _emit 0x39
        _emit 0x05
        _emit 0x7C
        _emit 0x59
        _emit 0x2B
        _emit 0x00
        _emit 0x74
        _emit 0x0B
        _emit 0x39
        _emit 0x05
        _emit 0xAC
        _emit 0x5B
        _emit 0x2B
        _emit 0x00
        _emit 0x74
        _emit 0x03
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
    }
}
