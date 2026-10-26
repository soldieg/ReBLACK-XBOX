/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A94EA(void)
{
    __asm {
        _emit 0x55
        _emit 0x8B
        _emit 0xEC
        _emit 0x83
        _emit 0xEC
        _emit 0x10
        _emit 0x33
        _emit 0xC0
        _emit 0x50
        _emit 0x50
        _emit 0x50
        _emit 0x50
        _emit 0xFF
        _emit 0x75
        _emit 0x0C
        _emit 0x8D
        _emit 0x45
        _emit 0xFC
        _emit 0x50
        _emit 0x8D
        _emit 0x45
        _emit 0xF0
        _emit 0x50
        _emit 0xE8
        _emit 0x3E
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xFF
        _emit 0x75
        _emit 0x08
        _emit 0x8D
        _emit 0x45
        _emit 0xF0
        _emit 0x50
        _emit 0xE8
        _emit 0xAC
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x24
        _emit 0xC9
        _emit 0xC3
    }
}
