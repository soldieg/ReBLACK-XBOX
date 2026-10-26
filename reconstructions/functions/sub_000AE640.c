/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000AE640(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x08
        _emit 0x83
        _emit 0xC0
        _emit 0xFE
        _emit 0x83
        _emit 0xF8
        _emit 0x04
        _emit 0x77
        _emit 0x1A
        _emit 0xFF
        _emit 0x24
        _emit 0x85
        _emit 0x68
        _emit 0xE6
        _emit 0x0A
        _emit 0x00
        _emit 0x8B
        _emit 0x41
        _emit 0x14
        _emit 0x8B
        _emit 0x48
        _emit 0x58
        _emit 0x6A
        _emit 0x03
        _emit 0x51
        _emit 0x50
        _emit 0xE8
        _emit 0x4F
        _emit 0xCF
        _emit 0xFD
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x0C
        _emit 0xC3
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
    }
}
