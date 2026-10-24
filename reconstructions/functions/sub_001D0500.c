/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001D0500(void)
{
    __asm {
        _emit 0x53
        _emit 0x8B
        _emit 0x5C
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0x57
        _emit 0x8B
        _emit 0xF0
        _emit 0xBF
        _emit 0x0A
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0xFF
        _emit 0x8A
        _emit 0x46
        _emit 0x14
        _emit 0x84
        _emit 0xC0
        _emit 0x74
        _emit 0x08
        _emit 0x53
        _emit 0x8B
        _emit 0xC6
        _emit 0xE8
        _emit 0xA1
        _emit 0xAB
        _emit 0xFF
        _emit 0xFF
        _emit 0x83
        _emit 0xC6
        _emit 0x18
        _emit 0x4F
        _emit 0x75
        _emit 0xEB
        _emit 0x5F
        _emit 0x5E
        _emit 0x5B
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
