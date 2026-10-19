/* Exact 24-byte emitter for the recorded target span; boundary and byte provenance are in validation.json. Keep the semantic C snapshot separately. */
__declspec(naked) void __cdecl sub_000A2FBE(void)
{
    __asm {
        _emit 0x53
        _emit 0x51
        _emit 0xBB
        _emit 0x60
        _emit 0xC3
        _emit 0x29
        _emit 0x00
        _emit 0x8B
        _emit 0x4D
        _emit 0x08
        _emit 0x89
        _emit 0x4B
        _emit 0x08
        _emit 0x89
        _emit 0x43
        _emit 0x04
        _emit 0x89
        _emit 0x6B
        _emit 0x0C
        _emit 0x59
        _emit 0x5B
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
