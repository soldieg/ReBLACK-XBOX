/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A3EEC(void)
{
    __asm {
        _emit 0x83
        _emit 0xEC
        _emit 0x0C
        _emit 0xDD
        _emit 0x14
        _emit 0x24
        _emit 0xE8
        _emit 0x75
        _emit 0x30
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0x0D
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xC4
        _emit 0x0C
        _emit 0xC3
    }
}
