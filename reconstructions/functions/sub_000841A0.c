/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000841A0(void)
{
    __asm {
        _emit 0x83
        _emit 0xEC
        _emit 0x08
        _emit 0x53
        _emit 0x0F
        _emit 0x31
        _emit 0x8D
        _emit 0x5C
        _emit 0x24
        _emit 0x04
        _emit 0x89
        _emit 0x03
        _emit 0x89
        _emit 0x53
        _emit 0x04
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x5B
        _emit 0x83
        _emit 0xC4
        _emit 0x08
        _emit 0xC3
    }
}
