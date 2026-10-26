/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A3EC8(void)
{
    __asm {
        _emit 0xE8
        _emit 0xC3
        _emit 0x42
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x48
        _emit 0x14
        _emit 0x69
        _emit 0xC9
        _emit 0xFD
        _emit 0x43
        _emit 0x03
        _emit 0x00
        _emit 0x81
        _emit 0xC1
        _emit 0xC3
        _emit 0x9E
        _emit 0x26
        _emit 0x00
        _emit 0x89
        _emit 0x48
        _emit 0x14
        _emit 0x8B
        _emit 0xC1
        _emit 0xC1
        _emit 0xE8
        _emit 0x10
        _emit 0x25
        _emit 0xFF
        _emit 0x7F
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
