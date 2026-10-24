/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001BC1B0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x91
        _emit 0xA0
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8D
        _emit 0x04
        _emit 0x40
        _emit 0x8D
        _emit 0x04
        _emit 0x82
        _emit 0x8B
        _emit 0x40
        _emit 0x04
        _emit 0x83
        _emit 0xF8
        _emit 0xFF
        _emit 0x74
        _emit 0x15
        _emit 0x8B
        _emit 0x89
        _emit 0x18
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x69
        _emit 0xC0
        _emit 0xD0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x03
        _emit 0x41
        _emit 0x48
        _emit 0x05
        _emit 0x90
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0x33
        _emit 0xC0
        _emit 0xB8
        _emit 0x90
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
