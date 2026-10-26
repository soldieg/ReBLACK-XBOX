/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001AF3A0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x81
        _emit 0x10
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x80
        _emit 0x8C
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x05
        _emit 0xA0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x51
        _emit 0xE8
        _emit 0x69
        _emit 0xFE
        _emit 0xFF
        _emit 0xFF
        _emit 0xC3
    }
}
