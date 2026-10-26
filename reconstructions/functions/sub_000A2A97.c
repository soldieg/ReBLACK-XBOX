/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A2A97(void)
{
    __asm {
        _emit 0x6A
        _emit 0x00
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0xE8
        _emit 0x44
        _emit 0xFE
        _emit 0xFF
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x10
        _emit 0xC3
    }
}
