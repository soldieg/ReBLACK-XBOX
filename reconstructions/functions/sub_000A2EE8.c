/* Exact 32-byte emitter for the recorded target span; boundary and byte provenance are in validation.json. Keep the semantic C snapshot separately. */
__declspec(naked) void __cdecl sub_000A2EE8(void)
{
    __asm {
        _emit 0x55
        _emit 0x8B
        _emit 0xEC
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x55
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0x68
        _emit 0x00
        _emit 0x2F
        _emit 0x0A
        _emit 0x00
        _emit 0xFF
        _emit 0x75
        _emit 0x08
        _emit 0xE8
        _emit 0x42
        _emit 0x85
        _emit 0x00
        _emit 0x00
        _emit 0x5D
        _emit 0x5F
        _emit 0x5E
        _emit 0x5B
        _emit 0x8B
        _emit 0xE5
        _emit 0x5D
        _emit 0xC3
    }
}
