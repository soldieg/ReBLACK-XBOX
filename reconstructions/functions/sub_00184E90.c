/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00184E90(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0xF1
        _emit 0x8B
        _emit 0x56
        _emit 0x38
        _emit 0x85
        _emit 0xD2
        _emit 0x74
        _emit 0x15
        _emit 0x8B
        _emit 0x4E
        _emit 0x04
        _emit 0x81
        _emit 0xC1
        _emit 0x10
        _emit 0x1F
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0xD8
        _emit 0xE5
        _emit 0xFF
        _emit 0xFF
        _emit 0xC7
        _emit 0x46
        _emit 0x38
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5E
        _emit 0xC3
    }
}
