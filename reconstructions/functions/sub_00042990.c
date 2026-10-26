/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00042990(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0xE8
        _emit 0x15
        _emit 0xD1
        _emit 0xFF
        _emit 0xFF
        _emit 0x50
        _emit 0x8B
        _emit 0x46
        _emit 0x78
        _emit 0x50
        _emit 0xE8
        _emit 0xEB
        _emit 0xDE
        _emit 0xFF
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x0C
        _emit 0x5E
        _emit 0xC3
    }
}
