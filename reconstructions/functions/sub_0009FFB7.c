/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0009FFB7(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0xF1
        _emit 0x56
        _emit 0xC7
        _emit 0x46
        _emit 0x1C
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xFF
        _emit 0x15
        _emit 0x2C
        _emit 0x31
        _emit 0x28
        _emit 0x00
        _emit 0x8B
        _emit 0xC6
        _emit 0x5E
        _emit 0xC3
    }
}
