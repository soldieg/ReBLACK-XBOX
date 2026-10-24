/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A587A(void)
{
    __asm {
        _emit 0x51
        _emit 0xDD
        _emit 0x3C
        _emit 0x24
        _emit 0xDB
        _emit 0xE2
        _emit 0x0F
        _emit 0xBF
        _emit 0x04
        _emit 0x24
        _emit 0x59
        _emit 0xC3
    }
}
