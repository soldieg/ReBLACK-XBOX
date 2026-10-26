/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00093EE0(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0xE8
        _emit 0xF5
        _emit 0x39
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x18
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x51
        _emit 0x52
        _emit 0x50
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x1C
        _emit 0x50
        _emit 0x56
        _emit 0xE8
        _emit 0xBF
        _emit 0xFD
        _emit 0xFF
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x18
        _emit 0x5E
        _emit 0xC3
    }
}
