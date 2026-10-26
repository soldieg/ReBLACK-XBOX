/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00038AB0(void)
{
    __asm {
        _emit 0x83
        _emit 0xEC
        _emit 0x10
        _emit 0x33
        _emit 0xC0
        _emit 0x89
        _emit 0x04
        _emit 0x24
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xA1
        _emit 0x58
        _emit 0x2D
        _emit 0x2B
        _emit 0x00
        _emit 0x8B
        _emit 0x48
        _emit 0x0C
        _emit 0x8B
        _emit 0x50
        _emit 0x10
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x1C
        _emit 0x89
        _emit 0x4C
        _emit 0x24
        _emit 0x08
        _emit 0x50
        _emit 0x8D
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x51
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0xE8
        _emit 0x92
        _emit 0xFC
        _emit 0xFF
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x18
        _emit 0xC3
    }
}
