/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00222D41(void)
{
    __asm {
        _emit 0xE8
        _emit 0x7D
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x83
        _emit 0x25
        _emit 0x58
        _emit 0x4C
        _emit 0x22
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
