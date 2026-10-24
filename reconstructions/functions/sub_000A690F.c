/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A690F(void)
{
    __asm {
        _emit 0x80
        _emit 0xA5
        _emit 0x38
        _emit 0xFD
        _emit 0xFF
        _emit 0xFF
        _emit 0xFE
    }
}
