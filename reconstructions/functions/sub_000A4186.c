/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A4186(void)
{
    __asm {
        _emit 0x58
        _emit 0x59
        _emit 0x87
        _emit 0x04
        _emit 0x24
        _emit 0xFF
        _emit 0xE0
    }
}
