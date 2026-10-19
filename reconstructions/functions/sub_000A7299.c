/* Exact x86 emitter derived from REA/Ghidra 12.1.4 on the derived PE.
 * Verified against XboxRecomp, XBE raw and split. Semantic C is preserved
 * separately; byte identity does not claim idiomatic C equivalence.
 */
__declspec(naked) void __cdecl sub_000A7299(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xFF
        _emit 0x34
        _emit 0xC5
        _emit 0x00
        _emit 0xCA
        _emit 0x29
        _emit 0x00
        _emit 0xFF
        _emit 0x15
        _emit 0xBC
        _emit 0x30
        _emit 0x28
        _emit 0x00
        _emit 0xC3
    }
}
