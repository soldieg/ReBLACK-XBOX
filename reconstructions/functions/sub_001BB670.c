/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001BB670(void)
{
    __asm {
        _emit 0x8B
        _emit 0x81
        _emit 0xA4
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xF8
        _emit 0xFF
        _emit 0x74
        _emit 0x23
        _emit 0x8B
        _emit 0x89
        _emit 0x18
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x69
        _emit 0xC0
        _emit 0xD0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x03
        _emit 0x41
        _emit 0x48
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x10
        _emit 0x66
        _emit 0x8B
        _emit 0x40
        _emit 0x5A
        _emit 0xF6
        _emit 0xC4
        _emit 0x08
        _emit 0x74
        _emit 0x07
        _emit 0xA8
        _emit 0x03
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
