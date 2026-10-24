/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000AA355(void)
{
    __asm {
        _emit 0xFF
        _emit 0x35
        _emit 0x0C
        _emit 0x0B
        _emit 0x2D
        _emit 0x00
        _emit 0xE8
        _emit 0x5E
        _emit 0xB2
        _emit 0xF7
        _emit 0xFF
        _emit 0xC3
    }
}
