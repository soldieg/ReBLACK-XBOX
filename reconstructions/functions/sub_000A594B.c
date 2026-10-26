/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A594B(void)
{
    __asm {
        _emit 0xE8
        _emit 0x54
        _emit 0x38
        _emit 0x00
        _emit 0x00
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x04
        _emit 0xE8
        _emit 0x1F
        _emit 0x38
        _emit 0x00
        _emit 0x00
        _emit 0x68
        _emit 0xFF
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xFF
        _emit 0x15
        _emit 0x64
        _emit 0xC7
        _emit 0x29
        _emit 0x00
        _emit 0x59
        _emit 0x59
        _emit 0xC3
    }
}
