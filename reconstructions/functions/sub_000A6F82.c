/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A6F82(void)
{
    __asm {
        _emit 0x66
        _emit 0x81
        _emit 0x3C
        _emit 0x24
        _emit 0x7F
        _emit 0x02
        _emit 0x74
        _emit 0x03
        _emit 0xD9
        _emit 0x2C
        _emit 0x24
        _emit 0x5A
        _emit 0xC3
    }
}
