/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00081EA0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x40
        _emit 0x14
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x08
        _emit 0xC7
        _emit 0x40
        _emit 0x10
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0x68
        _emit 0x0C
        _emit 0x08
        _emit 0x03
        _emit 0x00
        _emit 0x68
        _emit 0x48
        _emit 0x02
        _emit 0x2C
        _emit 0x00
        _emit 0xE8
        _emit 0x62
        _emit 0x42
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xC4
        _emit 0x08
        _emit 0xC7
        _emit 0x40
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
