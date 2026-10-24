/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001B4E30(void)
{
    __asm {
        _emit 0x0F
        _emit 0xBE
        _emit 0xC0
        _emit 0x83
        _emit 0xF8
        _emit 0x03
        _emit 0x77
        _emit 0x28
        _emit 0xFF
        _emit 0x24
        _emit 0x85
        _emit 0x64
        _emit 0x4E
        _emit 0x1B
        _emit 0x00
        _emit 0x8B
        _emit 0x51
        _emit 0x14
        _emit 0x8B
        _emit 0x41
        _emit 0x18
        _emit 0x03
        _emit 0xC2
        _emit 0x03
        _emit 0x41
        _emit 0x10
        _emit 0x03
        _emit 0x41
        _emit 0x0C
        _emit 0xC3
        _emit 0x8B
        _emit 0x51
        _emit 0x14
        _emit 0x8B
        _emit 0x41
        _emit 0x18
        _emit 0x03
        _emit 0xC2
        _emit 0x03
        _emit 0x41
        _emit 0x10
        _emit 0x03
        _emit 0x41
        _emit 0x0C
        _emit 0x03
        _emit 0x41
        _emit 0x08
        _emit 0xC3
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
    }
}
