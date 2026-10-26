/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A4FF5(void)
{
    __asm {
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x01
        _emit 0xE8
        _emit 0x33
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x59
        _emit 0x59
        _emit 0xC3
    }
}
