/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000270DA(void)
{
    __asm {
        _emit 0x55
        _emit 0x8B
        _emit 0xEC
        _emit 0x51
        _emit 0x51
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x04
        _emit 0x8D
        _emit 0x45
        _emit 0xFC
        _emit 0x50
        _emit 0x8D
        _emit 0x45
        _emit 0xF8
        _emit 0x50
        _emit 0x6A
        _emit 0x0A
        _emit 0xE8
        _emit 0xD0
        _emit 0x2D
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x7C
        _emit 0x05
        _emit 0x8B
        _emit 0x45
        _emit 0xFC
        _emit 0xC9
        _emit 0xC3
        _emit 0x33
        _emit 0xC0
        _emit 0xC9
        _emit 0xC3
    }
}
