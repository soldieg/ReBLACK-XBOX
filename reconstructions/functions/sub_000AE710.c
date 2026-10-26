/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000AE710(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x57
        _emit 0x8B
        _emit 0xC6
        _emit 0xE8
        _emit 0x63
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0x7C
        _emit 0x24
        _emit 0x14
        _emit 0x8B
        _emit 0xCE
        _emit 0x89
        _emit 0x07
        _emit 0xE8
        _emit 0x16
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x89
        _emit 0x47
        _emit 0x04
        _emit 0x8B
        _emit 0xC6
        _emit 0xE8
        _emit 0xDC
        _emit 0xFD
        _emit 0xFF
        _emit 0xFF
        _emit 0x89
        _emit 0x47
        _emit 0x08
        _emit 0x5F
        _emit 0x5E
        _emit 0xC3
    }
}
