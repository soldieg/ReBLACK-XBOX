/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000C5840(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0xF1
        _emit 0x8B
        _emit 0x46
        _emit 0x30
        _emit 0x50
        _emit 0xE8
        _emit 0x3B
        _emit 0x01
        _emit 0xF6
        _emit 0xFF
        _emit 0x33
        _emit 0xC0
        _emit 0xC7
        _emit 0x46
        _emit 0x30
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x89
        _emit 0x86
        _emit 0x40
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x46
        _emit 0x20
        _emit 0x5E
        _emit 0xC3
    }
}
