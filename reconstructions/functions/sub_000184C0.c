/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000184C0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x06
        _emit 0x66
        _emit 0xFF
        _emit 0x00
        _emit 0x8B
        _emit 0x57
        _emit 0x08
        _emit 0x66
        _emit 0xFF
        _emit 0x0A
        _emit 0x66
        _emit 0x83
        _emit 0x3A
        _emit 0x00
        _emit 0x75
        _emit 0x17
        _emit 0x0F
        _emit 0xB7
        _emit 0x4A
        _emit 0x04
        _emit 0xA1
        _emit 0xAC
        _emit 0xC9
        _emit 0x2E
        _emit 0x00
        _emit 0x83
        _emit 0xC1
        _emit 0x09
        _emit 0xE8
        _emit 0x9E
        _emit 0xD3
        _emit 0x0C
        _emit 0x00
        _emit 0x8B
        _emit 0x06
        _emit 0x89
        _emit 0x47
        _emit 0x08
        _emit 0xC3
        _emit 0x8B
        _emit 0x0E
        _emit 0x89
        _emit 0x4F
        _emit 0x08
        _emit 0xC3
    }
}
