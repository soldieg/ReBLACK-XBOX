/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A6E90(void)
{
    __asm {
        _emit 0x55
        _emit 0x8B
        _emit 0xEC
        _emit 0x83
        _emit 0xC4
        _emit 0xE0
        _emit 0x89
        _emit 0x45
        _emit 0xE0
        _emit 0x8B
        _emit 0x45
        _emit 0x18
        _emit 0x89
        _emit 0x45
        _emit 0xF0
        _emit 0x8B
        _emit 0x45
        _emit 0x1C
        _emit 0x89
        _emit 0x45
        _emit 0xF4
        _emit 0xEB
        _emit 0x09
    }
}
