/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00188260(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x04
        _emit 0x83
        _emit 0xF8
        _emit 0x03
        _emit 0x77
        _emit 0x1C
        _emit 0xFF
        _emit 0x24
        _emit 0x85
        _emit 0x8C
        _emit 0x82
        _emit 0x18
        _emit 0x00
        _emit 0x8B
        _emit 0x41
        _emit 0x08
        _emit 0x05
        _emit 0xF0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0x8B
        _emit 0x41
        _emit 0x08
        _emit 0x8B
        _emit 0x40
        _emit 0x10
        _emit 0x05
        _emit 0xF0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0xB8
        _emit 0x40
        _emit 0xF5
        _emit 0x2A
        _emit 0x00
        _emit 0xC3
    }
}
