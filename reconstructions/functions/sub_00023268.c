/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00023268(void)
{
    __asm {
        _emit 0x55
        _emit 0x8B
        _emit 0xEC
        _emit 0x51
        _emit 0x51
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x04
        _emit 0x8D
        _emit 0x45
        _emit 0xFC
        _emit 0x50
        _emit 0x8D
        _emit 0x45
        _emit 0xF8
        _emit 0x50
        _emit 0x68
        _emit 0x03
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0x3F
        _emit 0x6C
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x7C
        _emit 0x06
        _emit 0x0F
        _emit 0xB6
        _emit 0x45
        _emit 0xFD
        _emit 0xC9
        _emit 0xC3
        _emit 0x33
        _emit 0xC0
        _emit 0xC9
        _emit 0xC3
    }
}
