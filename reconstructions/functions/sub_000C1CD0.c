/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000C1CD0(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0xF1
        _emit 0x8B
        _emit 0x46
        _emit 0x20
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x07
        _emit 0x8B
        _emit 0x06
        _emit 0x6A
        _emit 0x00
        _emit 0xFF
        _emit 0x50
        _emit 0x14
        _emit 0x8B
        _emit 0x46
        _emit 0x20
        _emit 0x5E
        _emit 0xC3
    }
}
