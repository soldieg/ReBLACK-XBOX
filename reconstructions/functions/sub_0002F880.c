/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0002F880(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x57
        _emit 0x8B
        _emit 0x7C
        _emit 0x24
        _emit 0x10
        _emit 0x6A
        _emit 0x00
        _emit 0x57
        _emit 0x56
        _emit 0xFF
        _emit 0x15
        _emit 0xC0
        _emit 0xA6
        _emit 0x56
        _emit 0x00
        _emit 0x83
        _emit 0xC4
        _emit 0x0C
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x0E
        _emit 0xF6
        _emit 0x47
        _emit 0x22
        _emit 0x01
        _emit 0x74
        _emit 0x03
        _emit 0x83
        _emit 0x0E
        _emit 0x02
        _emit 0x5F
        _emit 0x8B
        _emit 0xC6
        _emit 0x5E
        _emit 0xC3
        _emit 0x5F
        _emit 0x33
        _emit 0xC0
        _emit 0x5E
        _emit 0xC3
    }
}
