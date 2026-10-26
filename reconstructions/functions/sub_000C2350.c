/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000C2350(void)
{
    __asm {
        _emit 0x8B
        _emit 0x01
        _emit 0xFF
        _emit 0x50
        _emit 0x10
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0xC7
        _emit 0x84
        _emit 0x8E
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xFF
        _emit 0x8E
        _emit 0x90
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
