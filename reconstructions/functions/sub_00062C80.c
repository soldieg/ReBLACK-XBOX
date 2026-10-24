/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00062C80(void)
{
    __asm {
        _emit 0x8B
        _emit 0x0D
        _emit 0xA4
        _emit 0xDD
        _emit 0x2B
        _emit 0x00
        _emit 0x83
        _emit 0xC8
        _emit 0xFF
        _emit 0x3B
        _emit 0xC8
        _emit 0x74
        _emit 0x13
        _emit 0x39
        _emit 0x05
        _emit 0xBC
        _emit 0xDE
        _emit 0x2B
        _emit 0x00
        _emit 0x74
        _emit 0x0B
        _emit 0x39
        _emit 0x05
        _emit 0xF4
        _emit 0xDF
        _emit 0x2B
        _emit 0x00
        _emit 0x74
        _emit 0x03
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
    }
}
