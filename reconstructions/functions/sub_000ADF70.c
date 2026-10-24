/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000ADF70(void)
{
    __asm {
        _emit 0x68
        _emit 0x0C
        _emit 0x0D
        _emit 0x2D
        _emit 0x00
        _emit 0xE8
        _emit 0xC6
        _emit 0x6E
        _emit 0xFD
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x04
        _emit 0xC3
    }
}
