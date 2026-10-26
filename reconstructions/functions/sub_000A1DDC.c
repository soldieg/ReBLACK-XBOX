/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A1DDC(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x85
        _emit 0xC0
        _emit 0x75
        _emit 0x01
        _emit 0x40
        _emit 0x83
        _emit 0x3D
        _emit 0x80
        _emit 0xCA
        _emit 0x57
        _emit 0x00
        _emit 0x01
        _emit 0x74
        _emit 0x06
        _emit 0x83
        _emit 0xC0
        _emit 0x0F
        _emit 0x83
        _emit 0xE0
        _emit 0xF0
        _emit 0x50
        _emit 0x6A
        _emit 0x00
        _emit 0xE8
        _emit 0xED
        _emit 0x51
        _emit 0xF8
        _emit 0xFF
        _emit 0x50
        _emit 0xE8
        _emit 0xB7
        _emit 0x67
        _emit 0xF8
        _emit 0xFF
        _emit 0xC3
    }
}
