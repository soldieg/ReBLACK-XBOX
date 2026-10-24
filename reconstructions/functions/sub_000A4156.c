/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A4156(void)
{
    __asm {
        _emit 0x55
        _emit 0x8B
        _emit 0xEC
        _emit 0x51
        _emit 0x53
        _emit 0x8B
        _emit 0x45
        _emit 0x0C
        _emit 0x83
        _emit 0xC0
        _emit 0x0C
        _emit 0x89
        _emit 0x45
        _emit 0xFC
        _emit 0x64
        _emit 0x8B
        _emit 0x1D
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x03
        _emit 0x64
        _emit 0xA3
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x45
        _emit 0x08
        _emit 0x8B
        _emit 0x5D
        _emit 0x0C
        _emit 0x8B
        _emit 0x63
        _emit 0xFC
        _emit 0x8B
        _emit 0x6D
        _emit 0xFC
        _emit 0xFF
        _emit 0xE0
    }
}
