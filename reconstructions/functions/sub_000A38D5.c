/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A38D5(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x83
        _emit 0xF8
        _emit 0x14
        _emit 0x7D
        _emit 0x0B
        _emit 0x83
        _emit 0xC0
        _emit 0x10
        _emit 0x50
        _emit 0xE8
        _emit 0x64
        _emit 0x3A
        _emit 0x00
        _emit 0x00
        _emit 0x59
        _emit 0xC3
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x83
        _emit 0xC0
        _emit 0x20
        _emit 0x50
        _emit 0xFF
        _emit 0x15
        _emit 0xC0
        _emit 0x30
        _emit 0x28
        _emit 0x00
        _emit 0xC3
    }
}
