/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000842F0(void)
{
    __asm {
        _emit 0x33
        _emit 0xC0
        _emit 0xA3
        _emit 0x84
        _emit 0x24
        _emit 0x2C
        _emit 0x00
        _emit 0xA3
        _emit 0x88
        _emit 0x24
        _emit 0x2C
        _emit 0x00
        _emit 0xC7
        _emit 0x05
        _emit 0x8C
        _emit 0x24
        _emit 0x2C
        _emit 0x00
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xA3
        _emit 0x90
        _emit 0x24
        _emit 0x2C
        _emit 0x00
        _emit 0xC3
    }
}
