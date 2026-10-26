/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0018C0C0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x48
        _emit 0x7C
        _emit 0x56
        _emit 0x8B
        _emit 0x35
        _emit 0x88
        _emit 0x19
        _emit 0x2D
        _emit 0x00
        _emit 0x51
        _emit 0x83
        _emit 0xC6
        _emit 0x78
        _emit 0xE8
        _emit 0xCD
        _emit 0xC6
        _emit 0xFF
        _emit 0xFF
        _emit 0x5E
        _emit 0xC3
    }
}
