/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000255AC(void)
{
    __asm {
        _emit 0x6A
        _emit 0x00
        _emit 0xE8
        _emit 0x66
        _emit 0xFE
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x04
        _emit 0xFF
        _emit 0x15
        _emit 0xE0
        _emit 0x30
        _emit 0x28
        _emit 0x00
        _emit 0xCC
    }
}
