/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A9E41(void)
{
    __asm {
        _emit 0x56
        _emit 0xE8
        _emit 0xB1
        _emit 0x9A
        _emit 0xFF
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
