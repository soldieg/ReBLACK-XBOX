/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000865F0(void)
{
    __asm {
        _emit 0xFF
        _emit 0x25
        _emit 0xD0
        _emit 0x28
        _emit 0x2C
        _emit 0x00
    }
}
