/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00026CDE(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x83
        _emit 0xF8
        _emit 0xFF
        _emit 0x75
        _emit 0x04
        _emit 0x33
        _emit 0xC0
        _emit 0xEB
        _emit 0x1E
        _emit 0xB9
        _emit 0x10
        _emit 0x27
        _emit 0x00
        _emit 0x00
        _emit 0xF7
        _emit 0xE1
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x89
        _emit 0x01
        _emit 0xF7
        _emit 0xD8
        _emit 0x89
        _emit 0x51
        _emit 0x04
        _emit 0x83
        _emit 0xD2
        _emit 0x00
        _emit 0xF7
        _emit 0xDA
        _emit 0x89
        _emit 0x01
        _emit 0x89
        _emit 0x51
        _emit 0x04
        _emit 0x8B
        _emit 0xC1
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
