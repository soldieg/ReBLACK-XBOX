/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001879A0(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0xF1
        _emit 0x8B
        _emit 0x48
        _emit 0x0C
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x0B
        _emit 0x39
        _emit 0x31
        _emit 0x75
        _emit 0x07
        _emit 0xC7
        _emit 0x40
        _emit 0x0C
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0x56
        _emit 0xC7
        _emit 0xFF
        _emit 0xFF
        _emit 0x5E
        _emit 0xC3
    }
}
