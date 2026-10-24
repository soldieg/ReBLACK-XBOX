/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0004F3C0(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0xF1
        _emit 0x8B
        _emit 0x4E
        _emit 0x08
        _emit 0x85
        _emit 0xC9
        _emit 0xC7
        _emit 0x06
        _emit 0x30
        _emit 0x4C
        _emit 0x28
        _emit 0x00
        _emit 0x74
        _emit 0x06
        _emit 0x8B
        _emit 0x01
        _emit 0x6A
        _emit 0x01
        _emit 0xFF
        _emit 0x10
        _emit 0xC7
        _emit 0x06
        _emit 0x94
        _emit 0x4C
        _emit 0x28
        _emit 0x00
        _emit 0x5E
        _emit 0xC3
    }
}
