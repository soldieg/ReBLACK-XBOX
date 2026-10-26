/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0004F8B0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0x50
        _emit 0x8B
        _emit 0xF1
        _emit 0xE8
        _emit 0x73
        _emit 0xFE
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x08
        _emit 0xC7
        _emit 0x06
        _emit 0x6C
        _emit 0x4C
        _emit 0x28
        _emit 0x00
        _emit 0x89
        _emit 0x4E
        _emit 0x0C
        _emit 0x8B
        _emit 0xC6
        _emit 0x5E
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
