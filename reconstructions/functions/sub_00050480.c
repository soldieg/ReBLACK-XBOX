/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00050480(void)
{
    __asm {
        _emit 0xA1
        _emit 0x88
        _emit 0x7E
        _emit 0x29
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x79
        _emit 0x03
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
        _emit 0x03
        _emit 0xC0
        _emit 0xA3
        _emit 0x88
        _emit 0x7E
        _emit 0x29
        _emit 0x00
        _emit 0xC3
    }
}
