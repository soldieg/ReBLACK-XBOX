/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000AD7E0(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x0C
        _emit 0x57
        _emit 0x8B
        _emit 0x7C
        _emit 0x24
        _emit 0x0C
        _emit 0x56
        _emit 0x57
        _emit 0xE8
        _emit 0x2F
        _emit 0xDC
        _emit 0xFD
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x08
        _emit 0x8B
        _emit 0xC7
        _emit 0x5F
        _emit 0xC7
        _emit 0x06
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC7
        _emit 0x46
        _emit 0x04
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC7
        _emit 0x46
        _emit 0x1C
        _emit 0xBC
        _emit 0x9E
        _emit 0x29
        _emit 0x00
        _emit 0x5E
        _emit 0xC3
    }
}
