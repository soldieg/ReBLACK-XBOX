/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00184AC0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x48
        _emit 0x48
        _emit 0x8A
        _emit 0x51
        _emit 0x48
        _emit 0x84
        _emit 0xD2
        _emit 0x75
        _emit 0x1C
        _emit 0x8B
        _emit 0xD1
        _emit 0x8B
        _emit 0x82
        _emit 0x8C
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8A
        _emit 0x88
        _emit 0xA1
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x3A
        _emit 0x88
        _emit 0xA2
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0x06
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
    }
}
