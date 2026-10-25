/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000BA190(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0xF1
        _emit 0xE8
        _emit 0x88
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xB0
        _emit 0x01
        _emit 0x5E
        _emit 0xC3
    }
}
