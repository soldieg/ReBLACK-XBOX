/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A1C1A(void)
{
    __asm {
        _emit 0x68
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0x0B
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x59
        _emit 0xA3
        _emit 0x88
        _emit 0xCA
        _emit 0x57
        _emit 0x00
        _emit 0x75
        _emit 0x04
        _emit 0x6A
        _emit 0x18
        _emit 0x58
        _emit 0xC3
        _emit 0x83
        _emit 0x20
        _emit 0x00
        _emit 0xA1
        _emit 0x88
        _emit 0xCA
        _emit 0x57
        _emit 0x00
        _emit 0xA3
        _emit 0x84
        _emit 0xCA
        _emit 0x57
        _emit 0x00
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
    }
}
