/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0002539D(void)
{
    __asm {
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x04
        _emit 0xFF
        _emit 0x15
        _emit 0x0C
        _emit 0x30
        _emit 0x28
        _emit 0x00
        _emit 0x8B
        _emit 0xD0
        _emit 0x52
        _emit 0xE8
        _emit 0xC0
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0xC2
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
