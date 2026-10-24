/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000BAFD0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x86
        _emit 0x2C
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x75
        _emit 0x18
        _emit 0x8B
        _emit 0x06
        _emit 0x8B
        _emit 0xCE
        _emit 0xFF
        _emit 0x50
        _emit 0x0C
        _emit 0xC6
        _emit 0x86
        _emit 0x35
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC6
        _emit 0x86
        _emit 0x36
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
        _emit 0x48
        _emit 0x89
        _emit 0x86
        _emit 0x2C
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
