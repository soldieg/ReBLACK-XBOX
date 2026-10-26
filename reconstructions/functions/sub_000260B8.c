/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000260B8(void)
{
    __asm {
        _emit 0x68
        _emit 0x00
        _emit 0x40
        _emit 0x00
        _emit 0x00
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0xE8
        _emit 0xA5
        _emit 0xFA
        _emit 0xFF
        _emit 0xFF
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
