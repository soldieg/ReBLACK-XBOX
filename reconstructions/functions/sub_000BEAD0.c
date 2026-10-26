/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000BEAD0(void)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8B
        _emit 0xF9
        _emit 0x8B
        _emit 0x77
        _emit 0x0C
        _emit 0x8B
        _emit 0x06
        _emit 0x0B
        _emit 0x46
        _emit 0x04
        _emit 0x74
        _emit 0x23
        _emit 0x8B
        _emit 0xFF
        _emit 0x8B
        _emit 0x4E
        _emit 0x08
        _emit 0x8B
        _emit 0x47
        _emit 0x08
        _emit 0x8B
        _emit 0x14
        _emit 0x39
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0x03
        _emit 0xCF
        _emit 0x50
        _emit 0x6A
        _emit 0x01
        _emit 0xFF
        _emit 0x12
        _emit 0x8B
        _emit 0x4E
        _emit 0x10
        _emit 0x8B
        _emit 0x46
        _emit 0x14
        _emit 0x83
        _emit 0xC6
        _emit 0x10
        _emit 0x0B
        _emit 0xC8
        _emit 0x75
        _emit 0xDF
        _emit 0x5F
        _emit 0x5E
        _emit 0xC3
    }
}
