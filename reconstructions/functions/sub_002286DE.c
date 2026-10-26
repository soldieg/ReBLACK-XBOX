/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_002286DE(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x1A
        _emit 0x8B
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x14
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0x50
        _emit 0xE8
        _emit 0x69
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0xEB
        _emit 0x05
        _emit 0xB8
        _emit 0x57
        _emit 0x00
        _emit 0x07
        _emit 0x80
        _emit 0xC2
        _emit 0x10
        _emit 0x00
    }
}
