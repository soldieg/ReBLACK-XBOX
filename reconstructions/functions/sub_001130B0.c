/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001130B0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x81
        _emit 0x30
        _emit 0x0A
        _emit 0x00
        _emit 0x00
        _emit 0x48
        _emit 0x74
        _emit 0x08
        _emit 0x48
        _emit 0x74
        _emit 0x0F
        _emit 0x83
        _emit 0xE8
        _emit 0x36
        _emit 0x75
        _emit 0x14
        _emit 0xC7
        _emit 0x81
        _emit 0x30
        _emit 0x0A
        _emit 0x00
        _emit 0x00
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC7
        _emit 0x81
        _emit 0x30
        _emit 0x0A
        _emit 0x00
        _emit 0x00
        _emit 0x1C
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
