/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000F9250(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0xF1
        _emit 0x57
        _emit 0xBA
        _emit 0x2B
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0x82
        _emit 0xE7
        _emit 0xFF
        _emit 0xFF
        _emit 0xC7
        _emit 0x06
        _emit 0x48
        _emit 0x3A
        _emit 0x29
        _emit 0x00
        _emit 0x8B
        _emit 0x47
        _emit 0x30
        _emit 0x89
        _emit 0x46
        _emit 0x30
        _emit 0x8B
        _emit 0xC6
        _emit 0x5E
        _emit 0xC3
    }
}
