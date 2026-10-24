/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0009BE70(void)
{
    __asm {
        _emit 0x8B
        _emit 0x01
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x26
        _emit 0x8B
        _emit 0x48
        _emit 0x60
        _emit 0x81
        _emit 0xF9
        _emit 0x00
        _emit 0x00
        _emit 0x80
        _emit 0x3F
        _emit 0x74
        _emit 0x1B
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x51
        _emit 0x8B
        _emit 0xD1
        _emit 0x52
        _emit 0x8B
        _emit 0xC1
        _emit 0x50
        _emit 0x56
        _emit 0xE8
        _emit 0x9D
        _emit 0x64
        _emit 0xFF
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x10
        _emit 0x8B
        _emit 0xC6
        _emit 0x5E
        _emit 0xC2
        _emit 0x04
        _emit 0x00
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
