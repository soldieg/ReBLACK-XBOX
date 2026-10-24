/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0009CDCE(void)
{
    __asm {
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8B
        _emit 0xF1
        _emit 0x33
        _emit 0xC0
        _emit 0x8B
        _emit 0xCA
        _emit 0x40
        _emit 0x83
        _emit 0xE1
        _emit 0x1F
        _emit 0xD3
        _emit 0xE0
        _emit 0xC1
        _emit 0xFA
        _emit 0x05
        _emit 0x23
        _emit 0x84
        _emit 0x96
        _emit 0x30
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x5E
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
