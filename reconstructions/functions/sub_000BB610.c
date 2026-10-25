/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000BB610(void)
{
    __asm {
        _emit 0x57
        _emit 0x8B
        _emit 0x7C
        _emit 0x24
        _emit 0x08
        _emit 0x8B
        _emit 0xC1
        _emit 0xE8
        _emit 0xD4
        _emit 0xFD
        _emit 0xFF
        _emit 0xFF
        _emit 0x5F
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
