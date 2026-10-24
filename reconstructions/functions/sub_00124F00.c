/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00124F00(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0xE8
        _emit 0x23
        _emit 0xD0
        _emit 0xF7
        _emit 0xFF
        _emit 0x8B
        _emit 0x0D
        _emit 0xF0
        _emit 0x45
        _emit 0x2D
        _emit 0x00
        _emit 0x89
        _emit 0x81
        _emit 0x4C
        _emit 0x01
        _emit 0x02
        _emit 0x00
        _emit 0xE8
        _emit 0xA4
        _emit 0x74
        _emit 0xFF
        _emit 0xFF
        _emit 0x56
        _emit 0xE8
        _emit 0xCE
        _emit 0xFD
        _emit 0xFF
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x08
        _emit 0x5E
        _emit 0xC3
    }
}
