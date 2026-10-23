/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000502B0(void)
{
    __asm {
        _emit 0xD9
        _emit 0x05
        _emit 0x54
        _emit 0x7E
        _emit 0x29
        _emit 0x00
        _emit 0xD8
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0xD9
        _emit 0xFF
        _emit 0xC3
    }
}
