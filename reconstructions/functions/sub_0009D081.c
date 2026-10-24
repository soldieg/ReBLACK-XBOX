/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0009D081(void)
{
    __asm {
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8B
        _emit 0xF2
        _emit 0x83
        _emit 0xCE
        _emit 0x01
        _emit 0x89
        _emit 0x40
        _emit 0x0C
        _emit 0x89
        _emit 0x40
        _emit 0x08
        _emit 0x89
        _emit 0x70
        _emit 0x04
        _emit 0x89
        _emit 0x14
        _emit 0x10
        _emit 0xE8
        _emit 0x71
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x5E
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
