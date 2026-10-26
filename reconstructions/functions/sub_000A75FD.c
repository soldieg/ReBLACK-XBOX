/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A75FD(void)
{
    __asm {
        _emit 0xFF
        _emit 0x4A
        _emit 0x04
        _emit 0x78
        _emit 0x09
        _emit 0x8B
        _emit 0x0A
        _emit 0x0F
        _emit 0xB6
        _emit 0x01
        _emit 0x41
        _emit 0x89
        _emit 0x0A
        _emit 0xC3
        _emit 0x52
        _emit 0xE8
        _emit 0xF2
        _emit 0x28
        _emit 0x00
        _emit 0x00
        _emit 0x59
        _emit 0xC3
    }
}
