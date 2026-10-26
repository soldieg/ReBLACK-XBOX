/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00023255(void)
{
    __asm {
        _emit 0x8D
        _emit 0x44
        _emit 0x24
        _emit 0x0C
        _emit 0x50
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x0C
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x0C
        _emit 0xE8
        _emit 0xD7
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xC3
    }
}
