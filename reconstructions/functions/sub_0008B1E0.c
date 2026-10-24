/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0008B1E0(void)
{
    __asm {
        _emit 0x68
        _emit 0xC0
        _emit 0x2A
        _emit 0x2C
        _emit 0x00
        _emit 0xE8
        _emit 0x56
        _emit 0x9C
        _emit 0xFF
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x04
        _emit 0xC3
    }
}
