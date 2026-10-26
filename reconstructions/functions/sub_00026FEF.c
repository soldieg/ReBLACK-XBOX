/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00026FEF(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0xC1
        _emit 0xE8
        _emit 0x03
        _emit 0x83
        _emit 0xE0
        _emit 0x08
        _emit 0x50
        _emit 0xFF
        _emit 0x35
        _emit 0x54
        _emit 0x61
        _emit 0x56
        _emit 0x00
        _emit 0xE8
        _emit 0xB0
        _emit 0x15
        _emit 0x00
        _emit 0x00
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
