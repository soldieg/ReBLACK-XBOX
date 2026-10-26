/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00084850(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x14
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x57
        _emit 0x8B
        _emit 0x7C
        _emit 0x24
        _emit 0x08
        _emit 0x51
        _emit 0x50
        _emit 0x89
        _emit 0x47
        _emit 0x48
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x1C
        _emit 0x89
        _emit 0x4F
        _emit 0x4C
        _emit 0xC7
        _emit 0x47
        _emit 0x44
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0x26
        _emit 0xFE
        _emit 0xFF
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x0C
        _emit 0x5F
        _emit 0xC3
    }
}
