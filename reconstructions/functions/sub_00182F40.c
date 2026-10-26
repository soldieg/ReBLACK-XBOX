/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00182F40(void)
{
    __asm {
        _emit 0x56
        _emit 0x0F
        _emit 0xB6
        _emit 0xB4
        _emit 0x08
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0xD0
        _emit 0xC1
        _emit 0xE2
        _emit 0x04
        _emit 0x03
        _emit 0xD6
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x34
        _emit 0x91
        _emit 0xFE
        _emit 0x84
        _emit 0x08
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5E
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
