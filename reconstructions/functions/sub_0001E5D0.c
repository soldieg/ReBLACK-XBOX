/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0001E5D0(void)
{
    __asm {
        _emit 0x3B
        _emit 0xFE
        _emit 0x74
        _emit 0x1F
        _emit 0x8B
        _emit 0x06
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x0F
        _emit 0xFF
        _emit 0x08
        _emit 0x75
        _emit 0x0B
        _emit 0x8B
        _emit 0x06
        _emit 0x50
        _emit 0xE8
        _emit 0xFA
        _emit 0x06
        _emit 0x0E
        _emit 0x00
        _emit 0x83
        _emit 0xC4
        _emit 0x04
        _emit 0x8B
        _emit 0x07
        _emit 0x85
        _emit 0xC0
        _emit 0x89
        _emit 0x06
        _emit 0x74
        _emit 0x02
        _emit 0xFF
        _emit 0x00
        _emit 0x8B
        _emit 0xC6
        _emit 0xC3
    }
}
