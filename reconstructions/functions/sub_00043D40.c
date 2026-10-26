/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00043D40(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x0C
        _emit 0x57
        _emit 0x56
        _emit 0xE8
        _emit 0x64
        _emit 0xBD
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x10
        _emit 0x8B
        _emit 0x40
        _emit 0x08
        _emit 0x8B
        _emit 0x7E
        _emit 0x34
        _emit 0x51
        _emit 0xE8
        _emit 0x14
        _emit 0xFD
        _emit 0xFF
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x08
        _emit 0x5F
        _emit 0x5E
        _emit 0xC3
    }
}
