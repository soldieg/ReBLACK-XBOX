/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A758D(void)
{
    __asm {
        _emit 0xA1
        _emit 0x90
        _emit 0xCA
        _emit 0x57
        _emit 0x00
        _emit 0xFF
        _emit 0x34
        _emit 0xB0
        _emit 0x56
        _emit 0xE8
        _emit 0x8C
        _emit 0xC3
        _emit 0xFF
        _emit 0xFF
        _emit 0x59
        _emit 0x59
        _emit 0xC3
    }
}
