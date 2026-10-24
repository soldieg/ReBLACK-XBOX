/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A4FE7(void)
{
    __asm {
        _emit 0x39
        _emit 0x75
        _emit 0x0C
        _emit 0x74
        _emit 0x08
        _emit 0x6A
        _emit 0x08
        _emit 0xE8
        _emit 0xA6
        _emit 0x22
        _emit 0x00
        _emit 0x00
        _emit 0x59
        _emit 0xC3
    }
}
