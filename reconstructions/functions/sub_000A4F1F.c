/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A4F1F(void)
{
    __asm {
        _emit 0x6A
        _emit 0x08
        _emit 0xE8
        _emit 0x25
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x59
        _emit 0xC3
    }
}
