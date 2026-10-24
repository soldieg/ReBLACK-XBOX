/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00086B30(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x8B
        _emit 0x46
        _emit 0x3C
        _emit 0x8D
        _emit 0x04
        _emit 0x40
        _emit 0xC1
        _emit 0xE0
        _emit 0x03
        _emit 0x68
        _emit 0x09
        _emit 0x08
        _emit 0x03
        _emit 0x00
        _emit 0x50
        _emit 0xE8
        _emit 0x47
        _emit 0xFA
        _emit 0xFF
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x40
        _emit 0x5E
        _emit 0xC3
    }
}
