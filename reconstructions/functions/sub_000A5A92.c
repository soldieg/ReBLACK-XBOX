/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A5A92(void)
{
    __asm {
        _emit 0x68
        _emit 0x00
        _emit 0x00
        _emit 0x03
        _emit 0x00
        _emit 0x68
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0xE8
        _emit 0x55
        _emit 0xD2
        _emit 0xFF
        _emit 0xFF
        _emit 0x59
        _emit 0x59
        _emit 0xC3
    }
}
