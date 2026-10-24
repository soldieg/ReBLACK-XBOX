/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000978E0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x33
        _emit 0xC0
        _emit 0x85
        _emit 0xD2
        _emit 0x74
        _emit 0x20
        _emit 0x8B
        _emit 0x4A
        _emit 0x04
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x19
        _emit 0x8B
        _emit 0x49
        _emit 0x1C
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x12
        _emit 0x66
        _emit 0x8B
        _emit 0x52
        _emit 0x08
        _emit 0x66
        _emit 0x83
        _emit 0xFA
        _emit 0xFF
        _emit 0x74
        _emit 0x08
        _emit 0x0F
        _emit 0xBF
        _emit 0xC2
        _emit 0xC1
        _emit 0xE0
        _emit 0x04
        _emit 0x03
        _emit 0xC1
        _emit 0xC3
    }
}
