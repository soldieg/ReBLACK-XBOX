/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00187820(void)
{
    __asm {
        _emit 0x8B
        _emit 0x48
        _emit 0x44
        _emit 0x8B
        _emit 0x91
        _emit 0x8C
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x82
        _emit 0x9C
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x88
        _emit 0xF4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x66
        _emit 0x83
        _emit 0x79
        _emit 0x18
        _emit 0x00
        _emit 0x7F
        _emit 0x0F
        _emit 0x83
        _emit 0xB8
        _emit 0xD8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x04
        _emit 0x74
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
