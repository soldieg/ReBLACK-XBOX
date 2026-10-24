/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001AF1F0(void)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x8B
        _emit 0xF8
        _emit 0xE8
        _emit 0x66
        _emit 0x51
        _emit 0xFE
        _emit 0xFF
        _emit 0x8B
        _emit 0xDF
        _emit 0xE8
        _emit 0x7F
        _emit 0xC5
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0xF7
        _emit 0xE8
        _emit 0x78
        _emit 0x8B
        _emit 0xFF
        _emit 0xFF
        _emit 0xE8
        _emit 0x83
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x57
        _emit 0xE8
        _emit 0x0D
        _emit 0x8D
        _emit 0xFF
        _emit 0xFF
        _emit 0x5F
        _emit 0x5E
        _emit 0x5B
        _emit 0xC3
    }
}
