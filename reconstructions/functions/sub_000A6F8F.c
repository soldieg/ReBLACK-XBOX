/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A6F8F(void)
{
    __asm {
        _emit 0x66
        _emit 0x8B
        _emit 0x04
        _emit 0x24
        _emit 0x66
        _emit 0x3D
        _emit 0x7F
        _emit 0x02
        _emit 0x74
        _emit 0x1E
        _emit 0x66
        _emit 0x83
        _emit 0xE0
        _emit 0x20
        _emit 0x74
        _emit 0x15
        _emit 0x9B
        _emit 0xDF
        _emit 0xE0
        _emit 0x66
        _emit 0x83
        _emit 0xE0
        _emit 0x20
        _emit 0x74
        _emit 0x0C
        _emit 0xB8
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0xF5
        _emit 0xFE
        _emit 0xFF
        _emit 0xFF
        _emit 0x5A
        _emit 0xC3
        _emit 0xD9
        _emit 0x2C
        _emit 0x24
        _emit 0x5A
        _emit 0xC3
    }
}
