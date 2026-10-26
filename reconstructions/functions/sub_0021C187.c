/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0021C187(void)
{
    __asm {
        _emit 0x51
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x0C
        _emit 0x8B
        _emit 0x49
        _emit 0x08
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x0C
        _emit 0xE8
        _emit 0x5E
        _emit 0x55
        _emit 0x00
        _emit 0x00
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
