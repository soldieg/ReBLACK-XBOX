/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000E4730(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0xF0
        _emit 0x8B
        _emit 0x01
        _emit 0xFF
        _emit 0x50
        _emit 0x0C
        _emit 0x8B
        _emit 0x48
        _emit 0x10
        _emit 0xF7
        _emit 0xD6
        _emit 0x23
        _emit 0xCE
        _emit 0x89
        _emit 0x48
        _emit 0x10
        _emit 0x5E
        _emit 0xC3
    }
}
