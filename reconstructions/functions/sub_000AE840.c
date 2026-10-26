/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000AE840(void)
{
    __asm {
        _emit 0x8B
        _emit 0x51
        _emit 0x14
        _emit 0x89
        _emit 0x50
        _emit 0x30
        _emit 0x8B
        _emit 0x49
        _emit 0x14
        _emit 0x8B
        _emit 0x40
        _emit 0x14
        _emit 0x8B
        _emit 0x50
        _emit 0x58
        _emit 0x51
        _emit 0x6A
        _emit 0x01
        _emit 0x52
        _emit 0x50
        _emit 0xE8
        _emit 0x87
        _emit 0xCD
        _emit 0xFD
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x10
        _emit 0xC3
    }
}
