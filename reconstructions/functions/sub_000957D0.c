/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000957D0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x10
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x08
        _emit 0x83
        _emit 0xC0
        _emit 0x04
        _emit 0x89
        _emit 0x11
        _emit 0x8B
        _emit 0x10
        _emit 0x83
        _emit 0xC0
        _emit 0x04
        _emit 0x89
        _emit 0x51
        _emit 0x04
        _emit 0x8B
        _emit 0x10
        _emit 0x89
        _emit 0x51
        _emit 0x08
        _emit 0x83
        _emit 0xC0
        _emit 0x04
        _emit 0xC3
    }
}
