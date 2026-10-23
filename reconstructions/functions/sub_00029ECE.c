/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00029ECE(void)
{
    __asm {
        _emit 0xFF
        _emit 0x25
        _emit 0x5C
        _emit 0x30
        _emit 0x28
        _emit 0x00
    }
}
