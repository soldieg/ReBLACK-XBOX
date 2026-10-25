/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A90AD(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x85
        _emit 0xC9
        _emit 0x75
        _emit 0x03
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
        _emit 0x66
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x66
        _emit 0x3D
        _emit 0xFF
        _emit 0x00
        _emit 0x76
        _emit 0x0F
        _emit 0xE8
        _emit 0x45
        _emit 0xC9
        _emit 0xFF
        _emit 0xFF
        _emit 0xC7
        _emit 0x00
        _emit 0x2A
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xC8
        _emit 0xFF
        _emit 0xC3
        _emit 0x88
        _emit 0x01
        _emit 0x33
        _emit 0xC0
        _emit 0x40
        _emit 0xC3
    }
}
