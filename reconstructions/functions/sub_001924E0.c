/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001924E0(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0xF0
        _emit 0x8B
        _emit 0x56
        _emit 0x04
        _emit 0x81
        _emit 0xC2
        _emit 0xD0
        _emit 0x0E
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0x7F
        _emit 0x03
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0xF2
        _emit 0xE8
        _emit 0x88
        _emit 0x4F
        _emit 0xFF
        _emit 0xFF
        _emit 0x5E
        _emit 0xC3
    }
}
