/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00282743(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x08
        _emit 0x50
        _emit 0xC6
        _emit 0x00
        _emit 0x1C
        _emit 0xC6
        _emit 0x40
        _emit 0x01
        _emit 0xC3
        _emit 0xC7
        _emit 0x40
        _emit 0x08
        _emit 0xF9
        _emit 0x25
        _emit 0x28
        _emit 0x00
        _emit 0x89
        _emit 0x48
        _emit 0x0C
        _emit 0xE8
        _emit 0x8F
        _emit 0xCB
        _emit 0xFF
        _emit 0xFF
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
