/* Exact 32-byte emitter from the REA Ghidra body; fixed-layout rel32 bytes are preserved. Keep the semantic C snapshot separately. */
__declspec(naked) void __cdecl sub_000302F0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x08
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x50
        _emit 0x6A
        _emit 0x01
        _emit 0x51
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x18
        _emit 0x52
        _emit 0x33
        _emit 0xC0
        _emit 0xE8
        _emit 0xA4
        _emit 0xFE
        _emit 0xFF
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x10
        _emit 0xC3
    }
}
