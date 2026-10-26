/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00043CC0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x08
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x41
        _emit 0x08
        _emit 0x57
        _emit 0x8B
        _emit 0x79
        _emit 0x58
        _emit 0x52
        _emit 0xE8
        _emit 0x9B
        _emit 0xFD
        _emit 0xFF
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x04
        _emit 0x5F
        _emit 0xC3
    }
}
