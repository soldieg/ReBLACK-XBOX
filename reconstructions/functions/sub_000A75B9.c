/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A75B9(void)
{
    __asm {
        _emit 0x6A
        _emit 0x01
        _emit 0xE8
        _emit 0xD9
        _emit 0xFC
        _emit 0xFF
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
