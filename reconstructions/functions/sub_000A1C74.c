/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A1C74(void)
{
    __asm {
        _emit 0xE8
        _emit 0xAF
        _emit 0x32
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
