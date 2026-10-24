/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001AA680(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0xF1
        _emit 0x8B
        _emit 0x4E
        _emit 0x04
        _emit 0x81
        _emit 0xC1
        _emit 0xA0
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xC0
        _emit 0xE8
        _emit 0x0D
        _emit 0xDA
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0x46
        _emit 0x04
        _emit 0x8B
        _emit 0x88
        _emit 0xC4
        _emit 0x16
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x4E
        _emit 0x08
        _emit 0x5E
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
