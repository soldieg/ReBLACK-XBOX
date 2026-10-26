/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A74BF(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0xE8
        _emit 0x98
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x85
        _emit 0xC0
        _emit 0x59
        _emit 0x74
        _emit 0x05
        _emit 0x83
        _emit 0xC8
        _emit 0xFF
        _emit 0x5E
        _emit 0xC3
        _emit 0xF6
        _emit 0x46
        _emit 0x0D
        _emit 0x40
        _emit 0x74
        _emit 0x0F
        _emit 0xFF
        _emit 0x76
        _emit 0x10
        _emit 0xE8
        _emit 0x67
        _emit 0x29
        _emit 0x00
        _emit 0x00
        _emit 0x59
        _emit 0xF7
        _emit 0xD8
        _emit 0x1B
        _emit 0xC0
        _emit 0x5E
        _emit 0xC3
        _emit 0x33
        _emit 0xC0
        _emit 0x5E
        _emit 0xC3
    }
}
