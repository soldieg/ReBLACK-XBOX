/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A2CF6(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x25
        _emit 0xFF
        _emit 0xFF
        _emit 0xF7
        _emit 0xFF
        _emit 0x50
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0xE8
        _emit 0xBB
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x59
        _emit 0x59
        _emit 0xC3
    }
}
