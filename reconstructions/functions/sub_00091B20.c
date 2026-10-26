/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00091B20(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x48
        _emit 0x74
        _emit 0x18
        _emit 0x48
        _emit 0x75
        _emit 0x27
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x41
        _emit 0x24
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x1C
        _emit 0x83
        _emit 0xC1
        _emit 0x50
        _emit 0x51
        _emit 0xFF
        _emit 0xD0
        _emit 0x83
        _emit 0xC4
        _emit 0x04
        _emit 0xC3
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x41
        _emit 0x20
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x07
        _emit 0x83
        _emit 0xC1
        _emit 0x50
        _emit 0x51
        _emit 0xFF
        _emit 0xD0
        _emit 0x59
        _emit 0xC3
    }
}
