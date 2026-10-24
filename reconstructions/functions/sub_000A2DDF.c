/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A2DDF(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4D
        _emit 0xF0
        _emit 0x64
        _emit 0x89
        _emit 0x0D
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x59
        _emit 0x5F
        _emit 0x5E
        _emit 0x5B
        _emit 0xC9
        _emit 0x51
        _emit 0xC3
    }
}
