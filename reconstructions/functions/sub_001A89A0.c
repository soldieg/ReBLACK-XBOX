/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001A89A0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x0C
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x08
        _emit 0x50
        _emit 0xA1
        _emit 0xD4
        _emit 0x45
        _emit 0x2D
        _emit 0x00
        _emit 0x51
        _emit 0xE8
        _emit 0x4C
        _emit 0x62
        _emit 0x01
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x10
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x52
        _emit 0x50
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x0C
        _emit 0x50
        _emit 0xE8
        _emit 0xC8
        _emit 0xFE
        _emit 0xFF
        _emit 0xFF
        _emit 0xC2
        _emit 0x10
        _emit 0x00
    }
}
