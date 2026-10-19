/* Exact x86 byte emitter derived from REA/Ghidra on the derived PE.
 * Semantics observed: push lock index 4, call sub_000A7299, pop ECX, return.
 * The relative CALL displacement is fixed to the XBE image layout, matching
 * the XboxRecomp target object; this is not a relocatable high-level C body.
 */
__declspec(naked) void __cdecl sub_000A39F1(void)
{
    __asm {
        _emit 0x6A
        _emit 0x04
        _emit 0xE8
        _emit 0xA1
        _emit 0x38
        _emit 0x00
        _emit 0x00
        _emit 0x59
        _emit 0xC3
    }
}
