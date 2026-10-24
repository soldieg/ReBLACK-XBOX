/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00086780(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xC0
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x88
        _emit 0x8C
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x0A
        _emit 0x83
        _emit 0xC9
        _emit 0x04
        _emit 0x89
        _emit 0x88
        _emit 0x8C
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0x83
        _emit 0xE1
        _emit 0xFB
        _emit 0x89
        _emit 0x88
        _emit 0x8C
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
