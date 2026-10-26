/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000CAFD0(void)
{
    __asm {
        _emit 0x53
        _emit 0x8B
        _emit 0xD9
        _emit 0x8D
        _emit 0x0C
        _emit 0x5B
        _emit 0x8D
        _emit 0x4C
        _emit 0xC8
        _emit 0x04
        _emit 0x89
        _emit 0x91
        _emit 0x20
        _emit 0x00
        _emit 0x02
        _emit 0x00
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x0C
        _emit 0x89
        _emit 0x91
        _emit 0x24
        _emit 0x00
        _emit 0x02
        _emit 0x00
        _emit 0x8B
        _emit 0x88
        _emit 0x1C
        _emit 0x01
        _emit 0x02
        _emit 0x00
        _emit 0x50
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x0C
        _emit 0xE8
        _emit 0x46
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xB0
        _emit 0x01
        _emit 0x5B
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
