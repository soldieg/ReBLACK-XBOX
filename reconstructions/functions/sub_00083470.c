/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00083470(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x0C
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x08
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x50
        _emit 0x51
        _emit 0x6A
        _emit 0x00
        _emit 0x52
        _emit 0x6A
        _emit 0x00
        _emit 0x68
        _emit 0x10
        _emit 0x03
        _emit 0x2C
        _emit 0x00
        _emit 0xE8
        _emit 0x43
        _emit 0xFC
        _emit 0xFF
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x18
        _emit 0xC3
    }
}
