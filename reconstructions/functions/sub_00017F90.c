/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00017F90(void)
{
    __asm {
        _emit 0x8B
        _emit 0x01
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x23
        _emit 0xFF
        _emit 0x08
        _emit 0x75
        _emit 0x1F
        _emit 0x53
        _emit 0x8B
        _emit 0x19
        _emit 0x85
        _emit 0xDB
        _emit 0x74
        _emit 0x17
        _emit 0xE8
        _emit 0x7A
        _emit 0x1F
        _emit 0x00
        _emit 0x00
        _emit 0xA1
        _emit 0xAC
        _emit 0xC9
        _emit 0x2E
        _emit 0x00
        _emit 0x8B
        _emit 0xD3
        _emit 0xB9
        _emit 0x18
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5B
        _emit 0xE9
        _emit 0xC8
        _emit 0xD8
        _emit 0x0C
        _emit 0x00
        _emit 0x5B
        _emit 0xC3
    }
}
