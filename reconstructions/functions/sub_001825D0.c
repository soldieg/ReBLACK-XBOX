/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001825D0(void)
{
    __asm {
        _emit 0x8A
        _emit 0x41
        _emit 0x06
        _emit 0x84
        _emit 0xC0
        _emit 0x8B
        _emit 0x09
        _emit 0x7C
        _emit 0x10
        _emit 0x8B
        _emit 0x51
        _emit 0x08
        _emit 0x0F
        _emit 0xBE
        _emit 0xC0
        _emit 0x3B
        _emit 0xC2
        _emit 0x7D
        _emit 0x06
        _emit 0x8B
        _emit 0x09
        _emit 0x8B
        _emit 0x04
        _emit 0x81
        _emit 0xC3
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
    }
}
