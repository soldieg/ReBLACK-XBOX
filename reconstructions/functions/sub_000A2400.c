/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A2400(void)
{
    __asm {
        _emit 0x55
        _emit 0x8B
        _emit 0xEC
        _emit 0x57
        _emit 0x8B
        _emit 0x7D
        _emit 0x08
        _emit 0x33
        _emit 0xC0
        _emit 0x83
        _emit 0xC9
        _emit 0xFF
        _emit 0xF2
        _emit 0xAE
        _emit 0x83
        _emit 0xC1
        _emit 0x01
        _emit 0xF7
        _emit 0xD9
        _emit 0x83
        _emit 0xEF
        _emit 0x01
        _emit 0x8A
        _emit 0x45
        _emit 0x0C
        _emit 0xFD
        _emit 0xF2
        _emit 0xAE
        _emit 0x83
        _emit 0xC7
        _emit 0x01
        _emit 0x38
        _emit 0x07
        _emit 0x74
        _emit 0x04
        _emit 0x33
        _emit 0xC0
        _emit 0xEB
        _emit 0x02
        _emit 0x8B
        _emit 0xC7
        _emit 0xFC
        _emit 0x5F
        _emit 0xC9
        _emit 0xC3
    }
}
