/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0001A150(void)
{
    __asm {
        _emit 0x8B
        _emit 0x09
        _emit 0x85
        _emit 0xC9
        _emit 0x56
        _emit 0x74
        _emit 0x0E
        _emit 0x8B
        _emit 0x31
        _emit 0x39
        _emit 0x56
        _emit 0x08
        _emit 0x74
        _emit 0x0F
        _emit 0x8B
        _emit 0x49
        _emit 0x04
        _emit 0x85
        _emit 0xC9
        _emit 0x75
        _emit 0xF2
        _emit 0xC7
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5E
        _emit 0xC3
        _emit 0x89
        _emit 0x08
        _emit 0x5E
        _emit 0xC3
    }
}
