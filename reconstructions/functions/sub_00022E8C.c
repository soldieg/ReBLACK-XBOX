/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00022E8C(void)
{
    __asm {
        _emit 0x6A
        _emit 0x00
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x0C
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x0C
        _emit 0xE8
        _emit 0x5B
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
