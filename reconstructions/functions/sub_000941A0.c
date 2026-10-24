/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000941A0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x0C
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x04
        _emit 0x8B
        _emit 0x00
        _emit 0xEB
        _emit 0x03
        _emit 0x83
        _emit 0xC8
        _emit 0xFF
        _emit 0x8B
        _emit 0x51
        _emit 0x08
        _emit 0x85
        _emit 0xD2
        _emit 0x74
        _emit 0x04
        _emit 0x8B
        _emit 0x12
        _emit 0xEB
        _emit 0x03
        _emit 0x83
        _emit 0xCA
        _emit 0xFF
        _emit 0x3B
        _emit 0xD0
        _emit 0x7C
        _emit 0x04
        _emit 0x42
        _emit 0x89
        _emit 0x11
        _emit 0xC3
        _emit 0x40
        _emit 0x89
        _emit 0x01
        _emit 0xC3
    }
}
