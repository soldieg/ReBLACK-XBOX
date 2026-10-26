/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00091950(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0xE8
        _emit 0x15
        _emit 0xFE
        _emit 0xFF
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x04
        _emit 0x85
        _emit 0xC0
        _emit 0x75
        _emit 0x02
        _emit 0x5E
        _emit 0xC3
        _emit 0x56
        _emit 0x50
        _emit 0xFF
        _emit 0x50
        _emit 0x4C
        _emit 0x83
        _emit 0xC4
        _emit 0x08
        _emit 0x5E
        _emit 0xC3
    }
}
