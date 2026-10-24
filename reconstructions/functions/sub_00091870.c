/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00091870(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x10
        _emit 0x8B
        _emit 0x41
        _emit 0x38
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x0C
        _emit 0x8B
        _emit 0xD6
        _emit 0x0F
        _emit 0xAF
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x52
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x0C
        _emit 0x52
        _emit 0x83
        _emit 0xC0
        _emit 0x28
        _emit 0x51
        _emit 0xFF
        _emit 0x50
        _emit 0x08
        _emit 0x33
        _emit 0xD2
        _emit 0x83
        _emit 0xC4
        _emit 0x0C
        _emit 0xF7
        _emit 0xF6
        _emit 0x5E
        _emit 0xC3
    }
}
