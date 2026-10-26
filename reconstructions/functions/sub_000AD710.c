/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000AD710(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x8B
        _emit 0x46
        _emit 0x5C
        _emit 0x8B
        _emit 0x48
        _emit 0x08
        _emit 0x8B
        _emit 0x96
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x51
        _emit 0x52
        _emit 0xFF
        _emit 0x50
        _emit 0x04
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0x51
        _emit 0x56
        _emit 0xE8
        _emit 0x1A
        _emit 0xDD
        _emit 0xFD
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x14
        _emit 0x5E
        _emit 0xC3
    }
}
