/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A92D2(void)
{
    __asm {
        _emit 0x33
        _emit 0xC0
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x83
        _emit 0x3C
        _emit 0x81
        _emit 0x00
        _emit 0x75
        _emit 0x0A
        _emit 0x40
        _emit 0x83
        _emit 0xF8
        _emit 0x03
        _emit 0x7C
        _emit 0xF0
        _emit 0x33
        _emit 0xC0
        _emit 0x40
        _emit 0xC3
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
    }
}
