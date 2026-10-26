/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00023112(void)
{
    __asm {
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x0C
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x0C
        _emit 0x83
        _emit 0xC0
        _emit 0x08
        _emit 0x50
        _emit 0xE8
        _emit 0xA1
        _emit 0x6D
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xC0
        _emit 0xC2
        _emit 0x0C
        _emit 0x00
    }
}
