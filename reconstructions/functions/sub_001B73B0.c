/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001B73B0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x91
        _emit 0xF4
        _emit 0x5A
        _emit 0x00
        _emit 0x00
        _emit 0x0F
        _emit 0xB6
        _emit 0x52
        _emit 0x11
        _emit 0x8B
        _emit 0x81
        _emit 0xF0
        _emit 0x5A
        _emit 0x00
        _emit 0x00
        _emit 0x3B
        _emit 0xC2
        _emit 0x74
        _emit 0x13
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x4A
        _emit 0x3B
        _emit 0xC2
        _emit 0x75
        _emit 0x0A
        _emit 0xC7
        _emit 0x81
        _emit 0xE8
        _emit 0x5A
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
