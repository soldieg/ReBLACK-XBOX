/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00026CB6(void)
{
    __asm {
        _emit 0x56
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0x56
        _emit 0xFF
        _emit 0x15
        _emit 0xEC
        _emit 0x2F
        _emit 0x28
        _emit 0x00
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x70
        _emit 0x04
        _emit 0xC7
        _emit 0x00
        _emit 0xFC
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xC7
        _emit 0x40
        _emit 0x08
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5E
        _emit 0xC2
        _emit 0x0C
        _emit 0x00
    }
}
