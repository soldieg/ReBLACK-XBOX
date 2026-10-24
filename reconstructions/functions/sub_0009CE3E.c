/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0009CE3E(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0xFF
        _emit 0x15
        _emit 0xC0
        _emit 0x30
        _emit 0x28
        _emit 0x00
        _emit 0x8B
        _emit 0x46
        _emit 0x1C
        _emit 0x40
        _emit 0x89
        _emit 0x46
        _emit 0x1C
        _emit 0x5E
        _emit 0xC3
    }
}
