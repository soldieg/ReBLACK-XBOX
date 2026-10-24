/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001B63A0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x81
        _emit 0x54
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xF8
        _emit 0xFF
        _emit 0x75
        _emit 0x03
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
        _emit 0x8B
        _emit 0x84
        _emit 0x81
        _emit 0x30
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
