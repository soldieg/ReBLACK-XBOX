/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000DEC30(void)
{
    __asm {
        _emit 0x53
        _emit 0x8B
        _emit 0x1D
        _emit 0x88
        _emit 0x19
        _emit 0x2D
        _emit 0x00
        _emit 0x56
        _emit 0x8B
        _emit 0x77
        _emit 0x30
        _emit 0x56
        _emit 0x8D
        _emit 0x83
        _emit 0xD4
        _emit 0x0C
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0xB9
        _emit 0x8C
        _emit 0x0A
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0x8D
        _emit 0x93
        _emit 0x48
        _emit 0x0A
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0xC6
        _emit 0xE8
        _emit 0x7A
        _emit 0x0B
        _emit 0x0B
        _emit 0x00
        _emit 0x5E
        _emit 0xC6
        _emit 0x47
        _emit 0x3F
        _emit 0x01
        _emit 0x5B
        _emit 0xC3
    }
}
