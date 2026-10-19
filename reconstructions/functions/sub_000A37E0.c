/* Exact x86 byte emitter derived from REA/Ghidra on the derived PE.
 * Semantics observed: push lock index 4, call sub_000A7299, pop ECX, return.
 * The relative CALL displacement is fixed to the XBE image layout; this is
 * not an idiomatic or relocatable high-level C body.
 */
__declspec(naked) void __cdecl sub_000A37E0(void)
{
    __asm {
        _emit 0x6A
        _emit 0x04
        _emit 0xE8
        _emit 0xB2
        _emit 0x3A
        _emit 0x00
        _emit 0x00
        _emit 0x59
        _emit 0xC3
    }
}
