/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A473D(void)
{
    __asm {
        _emit 0x55
        _emit 0x8B
        _emit 0xEC
        _emit 0x56
        _emit 0x8B
        _emit 0xF0
        _emit 0xEB
        _emit 0x13
        _emit 0x8B
        _emit 0x4D
        _emit 0x10
        _emit 0x8A
        _emit 0x45
        _emit 0x08
        _emit 0xFF
        _emit 0x4D
        _emit 0x0C
        _emit 0xE8
        _emit 0xB7
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x83
        _emit 0x3E
        _emit 0xFF
        _emit 0x74
        _emit 0x06
        _emit 0x83
        _emit 0x7D
        _emit 0x0C
        _emit 0x00
        _emit 0x7F
        _emit 0xE7
        _emit 0x5E
        _emit 0x5D
        _emit 0xC3
    }
}
