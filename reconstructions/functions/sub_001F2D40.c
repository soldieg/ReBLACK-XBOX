/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001F2D40(void)
{
    __asm {
        _emit 0x8B
        _emit 0x40
        _emit 0x34
        _emit 0x83
        _emit 0xF8
        _emit 0x1F
        _emit 0x7C
        _emit 0x08
        _emit 0x83
        _emit 0xF8
        _emit 0x20
        _emit 0x7D
        _emit 0x03
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
    }
}
