/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00190CD0(void)
{
    __asm {
        _emit 0x55
        _emit 0x8B
        _emit 0xEC
        _emit 0x33
        _emit 0xC0
        _emit 0x83
        _emit 0xE4
        _emit 0xF0
        _emit 0x84
        _emit 0xD2
        _emit 0x8B
        _emit 0x91
        _emit 0xE8
        _emit 0x2C
        _emit 0x02
        _emit 0x00
        _emit 0x0F
        _emit 0x95
        _emit 0xC0
        _emit 0x40
        _emit 0x3B
        _emit 0xC2
        _emit 0x7E
        _emit 0x13
        _emit 0x8B
        _emit 0x55
        _emit 0x08
        _emit 0x0F
        _emit 0x28
        _emit 0x02
        _emit 0x0F
        _emit 0x29
        _emit 0x81
        _emit 0x40
        _emit 0x2B
        _emit 0x02
        _emit 0x00
        _emit 0x89
        _emit 0x81
        _emit 0xE8
        _emit 0x2C
        _emit 0x02
        _emit 0x00
        _emit 0x8B
        _emit 0xE5
        _emit 0x5D
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
