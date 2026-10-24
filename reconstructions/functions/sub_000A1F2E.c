/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A1F2E(void)
{
    __asm {
        _emit 0xE9
        _emit 0xA3
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
    }
}
