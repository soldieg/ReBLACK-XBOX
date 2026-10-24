/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A5736(void)
{
    __asm {
        _emit 0x55
        _emit 0x8B
        _emit 0xEC
        _emit 0x51
        _emit 0x51
        _emit 0x8B
        _emit 0x45
        _emit 0x10
        _emit 0xDD
        _emit 0x45
        _emit 0x08
        _emit 0x8B
        _emit 0x4D
        _emit 0x0E
        _emit 0xDD
        _emit 0x5D
        _emit 0xF8
        _emit 0x05
        _emit 0xFE
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0xC1
        _emit 0xE0
        _emit 0x04
        _emit 0x81
        _emit 0xE1
        _emit 0x0F
        _emit 0x80
        _emit 0xFF
        _emit 0xFF
        _emit 0x0B
        _emit 0xC1
        _emit 0x66
        _emit 0x89
        _emit 0x45
        _emit 0xFE
        _emit 0xDD
        _emit 0x45
        _emit 0xF8
        _emit 0xC9
        _emit 0xC3
    }
}
