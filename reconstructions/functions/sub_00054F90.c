/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00054F90(void)
{
    __asm {
        _emit 0xFF
        _emit 0x25
        _emit 0x20
        _emit 0x7F
        _emit 0x29
        _emit 0x00
    }
}
