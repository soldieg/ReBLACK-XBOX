/* Exact x86 emitter. Encoding taken from fresh REA/Ghidra bytes on the derived PE,
 * then independently checked against XBE raw, XboxRecomp object and split.
 * The semantic C reconstruction is preserved in the adjacent source snapshot.
 * This emitter is exact-byte evidence, not a standalone semantic proof.
 */
__declspec(naked) void __cdecl sub_000A734B(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8D
        _emit 0x34
        _emit 0xC5
        _emit 0x00
        _emit 0xCA
        _emit 0x29
        _emit 0x00
        _emit 0x83
        _emit 0x3E
        _emit 0x00
        _emit 0x75
        _emit 0x13
        _emit 0x50
        _emit 0xE8
        _emit 0x49
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x85
        _emit 0xC0
        _emit 0x59
        _emit 0x75
        _emit 0x08
        _emit 0x6A
        _emit 0x11
        _emit 0xE8
        _emit 0xDD
        _emit 0xE5
        _emit 0xFF
        _emit 0xFF
        _emit 0x59
        _emit 0xFF
        _emit 0x36
        _emit 0xFF
        _emit 0x15
        _emit 0xC0
        _emit 0x30
        _emit 0x28
        _emit 0x00
        _emit 0x5E
        _emit 0xC3
    }
}
