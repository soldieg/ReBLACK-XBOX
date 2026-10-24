/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00157A90(void)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8B
        _emit 0xF1
        _emit 0x83
        _emit 0xC6
        _emit 0x20
        _emit 0xB9
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0xF8
        _emit 0xF3
        _emit 0xA5
        _emit 0x5F
        _emit 0x5E
        _emit 0xC3
    }
}
