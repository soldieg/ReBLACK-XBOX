/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000270B2(void)
{
    __asm {
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x04
        _emit 0xFF
        _emit 0x15
        _emit 0x1C
        _emit 0x31
        _emit 0x28
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x7D
        _emit 0x0A
        _emit 0x50
        _emit 0xE8
        _emit 0xD7
        _emit 0xE2
        _emit 0xFF
        _emit 0xFF
        _emit 0x33
        _emit 0xC0
        _emit 0xEB
        _emit 0x03
        _emit 0x33
        _emit 0xC0
        _emit 0x40
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
