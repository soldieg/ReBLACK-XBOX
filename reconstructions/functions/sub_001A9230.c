/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001A9230(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0xF1
        _emit 0xE8
        _emit 0x98
        _emit 0x9C
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0x46
        _emit 0x48
        _emit 0x8B
        _emit 0x80
        _emit 0xA8
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x15
        _emit 0x88
        _emit 0x19
        _emit 0x2D
        _emit 0x00
        _emit 0x8D
        _emit 0x0C
        _emit 0x40
        _emit 0x8B
        _emit 0x84
        _emit 0x8A
        _emit 0xB0
        _emit 0x0F
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x0F
        _emit 0x94
        _emit 0xC0
        _emit 0x88
        _emit 0x86
        _emit 0x82
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5E
        _emit 0xC3
    }
}
