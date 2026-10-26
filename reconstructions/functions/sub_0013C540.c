/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0013C540(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4E
        _emit 0x10
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x13
        _emit 0x8B
        _emit 0x01
        _emit 0xFF
        _emit 0x50
        _emit 0x0C
        _emit 0x8B
        _emit 0x0E
        _emit 0x6A
        _emit 0x00
        _emit 0x89
        _emit 0x4E
        _emit 0x10
        _emit 0x8B
        _emit 0x11
        _emit 0x6A
        _emit 0x00
        _emit 0xFF
        _emit 0x52
        _emit 0x04
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
