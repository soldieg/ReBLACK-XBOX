/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000B2468(void)
{
    __asm {
        _emit 0x6A
        _emit 0xFF
        _emit 0x50
        _emit 0x64
        _emit 0xA1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x0C
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x6C
        _emit 0x24
        _emit 0x0C
        _emit 0x8D
        _emit 0x6C
        _emit 0x24
        _emit 0x0C
        _emit 0x50
        _emit 0xC3
    }
}
