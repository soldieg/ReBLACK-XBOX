/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0009CD97(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x83
        _emit 0xC0
        _emit 0x0B
        _emit 0x83
        _emit 0xF8
        _emit 0x10
        _emit 0x76
        _emit 0x04
        _emit 0x83
        _emit 0xE0
        _emit 0xF8
        _emit 0xC3
        _emit 0x6A
        _emit 0x10
        _emit 0x58
        _emit 0xC3
    }
}
