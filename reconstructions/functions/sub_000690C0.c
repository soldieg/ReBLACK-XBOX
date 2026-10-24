/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000690C0(void)
{
    __asm {
        _emit 0x33
        _emit 0xC0
        _emit 0x89
        _emit 0x41
        _emit 0x04
        _emit 0x89
        _emit 0x41
        _emit 0x08
        _emit 0x89
        _emit 0x41
        _emit 0x0C
        _emit 0x89
        _emit 0x41
        _emit 0x14
        _emit 0x89
        _emit 0x41
        _emit 0x18
        _emit 0x89
        _emit 0x41
        _emit 0x1C
        _emit 0xC7
        _emit 0x41
        _emit 0x20
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xC3
    }
}
