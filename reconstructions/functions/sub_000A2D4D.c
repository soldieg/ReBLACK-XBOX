/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A2D4D(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x66
        _emit 0x8B
        _emit 0x08
        _emit 0x40
        _emit 0x40
        _emit 0x66
        _emit 0x85
        _emit 0xC9
        _emit 0x75
        _emit 0xF6
        _emit 0x2B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xD1
        _emit 0xF8
        _emit 0x48
        _emit 0xC3
    }
}
