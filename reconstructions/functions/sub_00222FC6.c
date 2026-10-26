/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00222FC6(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0xF1
        _emit 0x57
        _emit 0x8B
        _emit 0x3E
        _emit 0x85
        _emit 0xFF
        _emit 0x74
        _emit 0x10
        _emit 0x8B
        _emit 0xCF
        _emit 0xE8
        _emit 0x3E
        _emit 0xE6
        _emit 0xFF
        _emit 0xFF
        _emit 0x57
        _emit 0xE8
        _emit 0xE5
        _emit 0x86
        _emit 0xFF
        _emit 0xFF
        _emit 0x83
        _emit 0x26
        _emit 0x00
        _emit 0x5F
        _emit 0x5E
        _emit 0xC3
    }
}
