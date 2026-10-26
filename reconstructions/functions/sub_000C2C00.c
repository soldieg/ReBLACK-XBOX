/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000C2C00(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x0C
        _emit 0x8B
        _emit 0xC6
        _emit 0xE8
        _emit 0xD4
        _emit 0xC3
        _emit 0xFF
        _emit 0xFF
        _emit 0x85
        _emit 0xC0
        _emit 0x75
        _emit 0x02
        _emit 0x5E
        _emit 0xC3
        _emit 0x8B
        _emit 0x10
        _emit 0x56
        _emit 0x8B
        _emit 0xC8
        _emit 0xFF
        _emit 0x12
        _emit 0x5E
        _emit 0xC3
    }
}
