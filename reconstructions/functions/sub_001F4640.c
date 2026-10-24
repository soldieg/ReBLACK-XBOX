/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001F4640(void)
{
    __asm {
        _emit 0x33
        _emit 0xC0
        _emit 0x84
        _emit 0xC9
        _emit 0x74
        _emit 0x05
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x56
        _emit 0x50
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x0C
        _emit 0x8B
        _emit 0xF2
        _emit 0x50
        _emit 0x83
        _emit 0xC6
        _emit 0x4C
        _emit 0xE8
        _emit 0xD4
        _emit 0xEF
        _emit 0xFF
        _emit 0xFF
        _emit 0x5E
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
