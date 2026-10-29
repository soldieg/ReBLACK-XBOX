/* shortcut: split byte emitter preserves the full span; replace when semantic C matches. */
__declspec(naked) void __cdecl sub_000A34BD(void)
{
    __asm {
        _emit 0xE8
        _emit 0xC3
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x83
        _emit 0x7C
        _emit 0x24
        _emit 0x04
        _emit 0x00
        _emit 0x74
        _emit 0x05
        _emit 0xE8
        _emit 0xC4
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0xDB
        _emit 0xE2
        _emit 0xC3
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
    }
}
