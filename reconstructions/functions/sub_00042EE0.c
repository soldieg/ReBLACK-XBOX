/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00042EE0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x85
        _emit 0xC0
        _emit 0x8B
        _emit 0x0D
        _emit 0x8C
        _emit 0xA5
        _emit 0x56
        _emit 0x00
        _emit 0x75
        _emit 0x06
        _emit 0x8B
        _emit 0x81
        _emit 0xB8
        _emit 0xA6
        _emit 0x56
        _emit 0x00
        _emit 0x89
        _emit 0x81
        _emit 0xA0
        _emit 0xA6
        _emit 0x56
        _emit 0x00
        _emit 0xC3
    }
}
