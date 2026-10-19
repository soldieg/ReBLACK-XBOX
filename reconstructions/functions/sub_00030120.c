/* Exact 19-byte emitter from the REA Ghidra body; fixed-layout rel32 bytes are preserved. Keep the semantic C snapshot separately. */
__declspec(naked) void __cdecl sub_00030120(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x50
        _emit 0x51
        _emit 0xE8
        _emit 0x08
        _emit 0x39
        _emit 0x07
        _emit 0x00
        _emit 0x83
        _emit 0xC4
        _emit 0x08
        _emit 0xC3
    }
}
