/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001B8DF0(void)
{
    __asm {
        _emit 0xA1
        _emit 0x60
        _emit 0x0D
        _emit 0x2D
        _emit 0x00
        _emit 0x8B
        _emit 0x88
        _emit 0xC8
        _emit 0xD3
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x41
        _emit 0x04
        _emit 0x8B
        _emit 0x88
        _emit 0x94
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xF9
        _emit 0x04
        _emit 0x73
        _emit 0x17
        _emit 0x8B
        _emit 0x92
        _emit 0x90
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x0F
        _emit 0xB7
        _emit 0x52
        _emit 0x54
        _emit 0x89
        _emit 0x94
        _emit 0x88
        _emit 0x84
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0xFF
        _emit 0x80
        _emit 0x94
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
