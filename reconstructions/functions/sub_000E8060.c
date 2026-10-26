/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000E8060(void)
{
    __asm {
        _emit 0x8B
        _emit 0x06
        _emit 0x0F
        _emit 0xB7
        _emit 0x40
        _emit 0x02
        _emit 0x50
        _emit 0x6A
        _emit 0x01
        _emit 0x50
        _emit 0x6A
        _emit 0x00
        _emit 0x56
        _emit 0xE8
        _emit 0xDE
        _emit 0xFB
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0x0E
        _emit 0x83
        _emit 0xC1
        _emit 0x08
        _emit 0x51
        _emit 0xE8
        _emit 0xC6
        _emit 0xA3
        _emit 0xFC
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x04
        _emit 0x8B
        _emit 0xC6
        _emit 0xC3
    }
}
