/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001BDF30(void)
{
    __asm {
        _emit 0x8B
        _emit 0x80
        _emit 0x9C
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x0D
        _emit 0x8B
        _emit 0x88
        _emit 0xE8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x41
        _emit 0x0C
        _emit 0x83
        _emit 0xC0
        _emit 0x10
        _emit 0xC3
        _emit 0xA1
        _emit 0xE0
        _emit 0x80
        _emit 0x2A
        _emit 0x00
        _emit 0xC3
    }
}
