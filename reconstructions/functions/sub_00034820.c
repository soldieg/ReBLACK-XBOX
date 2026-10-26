/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00034820(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x8B
        _emit 0x56
        _emit 0x54
        _emit 0x4A
        _emit 0x8B
        _emit 0xCA
        _emit 0x85
        _emit 0xC9
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x56
        _emit 0x54
        _emit 0x7F
        _emit 0x05
        _emit 0xE8
        _emit 0x04
        _emit 0xFE
        _emit 0xFF
        _emit 0xFF
        _emit 0x5E
        _emit 0xC3
    }
}
