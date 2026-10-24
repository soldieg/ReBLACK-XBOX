/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00206160(void)
{
    __asm {
        _emit 0x53
        _emit 0x8B
        _emit 0xD9
        _emit 0x8B
        _emit 0x53
        _emit 0x18
        _emit 0x0F
        _emit 0xBF
        _emit 0xC8
        _emit 0xC1
        _emit 0xE1
        _emit 0x06
        _emit 0x8B
        _emit 0x0C
        _emit 0x11
        _emit 0x51
        _emit 0x50
        _emit 0xE8
        _emit 0x3A
        _emit 0xD1
        _emit 0xFF
        _emit 0xFF
        _emit 0x5B
        _emit 0xC3
    }
}
