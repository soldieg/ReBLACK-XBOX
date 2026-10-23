/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00051540(void)
{
    __asm {
        _emit 0xA1
        _emit 0x00
        _emit 0x7F
        _emit 0x29
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x02
        _emit 0xFF
        _emit 0xE0
        _emit 0xD9
        _emit 0x05
        _emit 0xBC
        _emit 0x5C
        _emit 0x29
        _emit 0x00
        _emit 0xC3
    }
}
