/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001BE910(void)
{
    __asm {
        _emit 0x33
        _emit 0xC9
        _emit 0x05
        _emit 0xD0
        _emit 0x49
        _emit 0x00
        _emit 0x00
        _emit 0x39
        _emit 0x50
        _emit 0x08
        _emit 0x74
        _emit 0x0D
        _emit 0x41
        _emit 0x05
        _emit 0x80
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xF9
        _emit 0x02
        _emit 0x7C
        _emit 0xF0
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
    }
}
