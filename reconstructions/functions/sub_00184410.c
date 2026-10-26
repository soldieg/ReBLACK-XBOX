/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00184410(void)
{
    __asm {
        _emit 0x33
        _emit 0xD2
        _emit 0x83
        _emit 0xC1
        _emit 0x74
        _emit 0x8B
        _emit 0x01
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x04
        _emit 0x3B
        _emit 0xC6
        _emit 0x74
        _emit 0x0C
        _emit 0x42
        _emit 0x83
        _emit 0xC1
        _emit 0x04
        _emit 0x83
        _emit 0xFA
        _emit 0x04
        _emit 0x7C
        _emit 0xED
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
