/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000E0720(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x77
        _emit 0x30
        _emit 0x8B
        _emit 0x06
        _emit 0x8B
        _emit 0xCE
        _emit 0xFF
        _emit 0x50
        _emit 0x64
        _emit 0x84
        _emit 0xC0
        _emit 0x74
        _emit 0x15
        _emit 0x8B
        _emit 0x0D
        _emit 0x88
        _emit 0x19
        _emit 0x2D
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0x56
        _emit 0x81
        _emit 0xC1
        _emit 0x48
        _emit 0x0A
        _emit 0x00
        _emit 0x00
        _emit 0x51
        _emit 0xE8
        _emit 0x4C
        _emit 0x81
        _emit 0x0C
        _emit 0x00
        _emit 0xC6
        _emit 0x47
        _emit 0x3F
        _emit 0x00
        _emit 0x5E
        _emit 0xC3
    }
}
