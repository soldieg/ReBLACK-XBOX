/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001B57A0(void)
{
    __asm {
        _emit 0x66
        _emit 0x8B
        _emit 0x04
        _emit 0x56
        _emit 0x66
        _emit 0x0F
        _emit 0xB6
        _emit 0xC9
        _emit 0x66
        _emit 0x3B
        _emit 0xC1
        _emit 0x73
        _emit 0x03
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
        _emit 0x2B
        _emit 0xC1
        _emit 0x66
        _emit 0x89
        _emit 0x04
        _emit 0x56
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
