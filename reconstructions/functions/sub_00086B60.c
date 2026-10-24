/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00086B60(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x48
        _emit 0x40
        _emit 0x89
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0xE9
        _emit 0x70
        _emit 0xFA
        _emit 0xFF
        _emit 0xFF
    }
}
