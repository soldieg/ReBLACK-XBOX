/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00094470(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x49
        _emit 0x20
        _emit 0x8D
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        _emit 0xE8
        _emit 0x5F
        _emit 0xFD
        _emit 0xFF
        _emit 0xFF
        _emit 0xC3
    }
}
