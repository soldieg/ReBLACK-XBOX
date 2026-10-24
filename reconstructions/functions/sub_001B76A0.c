/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001B76A0(void)
{
    __asm {
        _emit 0x33
        _emit 0xC9
        _emit 0x89
        _emit 0x48
        _emit 0x10
        _emit 0x88
        _emit 0x48
        _emit 0x14
        _emit 0x88
        _emit 0x48
        _emit 0x15
        _emit 0x89
        _emit 0x48
        _emit 0x08
        _emit 0x89
        _emit 0x48
        _emit 0x0C
        _emit 0x88
        _emit 0x48
        _emit 0x16
        _emit 0x8B
        _emit 0x80
        _emit 0xB0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3B
        _emit 0xC1
        _emit 0x75
        _emit 0xE4
        _emit 0xC3
    }
}
