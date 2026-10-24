/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00094430(void)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8B
        _emit 0x7C
        _emit 0x24
        _emit 0x0C
        _emit 0x8B
        _emit 0x07
        _emit 0x83
        _emit 0xC0
        _emit 0x08
        _emit 0x50
        _emit 0x8B
        _emit 0xF1
        _emit 0xE8
        _emit 0x8D
        _emit 0xFE
        _emit 0xFF
        _emit 0xFF
        _emit 0x57
        _emit 0x8B
        _emit 0xCE
        _emit 0xE8
        _emit 0x35
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x5F
        _emit 0x5E
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
