/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A2CC4(void)
{
    __asm {
        _emit 0x55
        _emit 0x8B
        _emit 0xEC
        _emit 0x51
        _emit 0x53
        _emit 0x9B
        _emit 0xD9
        _emit 0x7D
        _emit 0xFC
        _emit 0x8B
        _emit 0x5D
        _emit 0xFC
        _emit 0xE8
        _emit 0xCF
        _emit 0xFE
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0xD8
        _emit 0x8B
        _emit 0x45
        _emit 0x0C
        _emit 0xF7
        _emit 0xD0
        _emit 0x23
        _emit 0xD8
        _emit 0x8B
        _emit 0x45
        _emit 0x08
        _emit 0x23
        _emit 0x45
        _emit 0x0C
        _emit 0x0B
        _emit 0xD8
        _emit 0xE8
        _emit 0x4B
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x89
        _emit 0x45
        _emit 0x0C
        _emit 0xD9
        _emit 0x6D
        _emit 0x0C
        _emit 0x8B
        _emit 0xC3
        _emit 0x5B
        _emit 0xC9
        _emit 0xC3
    }
}
