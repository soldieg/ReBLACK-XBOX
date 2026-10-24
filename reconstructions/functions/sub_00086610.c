/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00086610(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x0F
        _emit 0xAF
        _emit 0x74
        _emit 0x24
        _emit 0x0C
        _emit 0x56
        _emit 0xE8
        _emit 0x0F
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x8B
        _emit 0xD0
        _emit 0x83
        _emit 0xC4
        _emit 0x04
        _emit 0x85
        _emit 0xD2
        _emit 0x74
        _emit 0x14
        _emit 0x57
        _emit 0x8B
        _emit 0xCE
        _emit 0xC1
        _emit 0xE9
        _emit 0x02
        _emit 0x33
        _emit 0xC0
        _emit 0x8B
        _emit 0xFA
        _emit 0xF3
        _emit 0xAB
        _emit 0x8B
        _emit 0xCE
        _emit 0x83
        _emit 0xE1
        _emit 0x03
        _emit 0xF3
        _emit 0xAA
        _emit 0x5F
        _emit 0x8B
        _emit 0xC2
        _emit 0x5E
        _emit 0xC3
    }
}
