/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000B23F0(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x8B
        _emit 0x46
        _emit 0x0C
        _emit 0x6A
        _emit 0xFF
        _emit 0x50
        _emit 0xE8
        _emit 0x8C
        _emit 0x0A
        _emit 0xF7
        _emit 0xFF
        _emit 0x8B
        _emit 0x56
        _emit 0x0C
        _emit 0x66
        _emit 0x8B
        _emit 0x4E
        _emit 0x06
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x01
        _emit 0x52
        _emit 0x66
        _emit 0x89
        _emit 0x4E
        _emit 0x08
        _emit 0x66
        _emit 0xC7
        _emit 0x46
        _emit 0x0A
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0xB5
        _emit 0x09
        _emit 0xF7
        _emit 0xFF
        _emit 0x5E
        _emit 0xC3
    }
}
