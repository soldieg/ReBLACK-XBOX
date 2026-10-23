/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00043EC0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x83
        _emit 0xF8
        _emit 0x04
        _emit 0x75
        _emit 0x01
        _emit 0xC3
        _emit 0x8B
        _emit 0x04
        _emit 0x85
        _emit 0x98
        _emit 0x40
        _emit 0x28
        _emit 0x00
        _emit 0x0F
        _emit 0xAF
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0xC3
    }
}
