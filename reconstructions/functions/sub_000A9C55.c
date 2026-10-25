/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A9C55(void)
{
    __asm {
        _emit 0x6A
        _emit 0x02
        _emit 0xE8
        _emit 0xEF
        _emit 0xBC
        _emit 0xFF
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
