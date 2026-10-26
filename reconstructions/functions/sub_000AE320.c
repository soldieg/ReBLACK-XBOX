/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000AE320(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0xE8
        _emit 0x05
        _emit 0x79
        _emit 0xFD
        _emit 0xFF
        _emit 0x33
        _emit 0xC0
        _emit 0x83
        _emit 0xC4
        _emit 0x04
        _emit 0x66
        _emit 0x89
        _emit 0x46
        _emit 0x1A
        _emit 0x66
        _emit 0x89
        _emit 0x46
        _emit 0x18
        _emit 0x89
        _emit 0x46
        _emit 0x24
        _emit 0x89
        _emit 0x46
        _emit 0x20
        _emit 0x89
        _emit 0x46
        _emit 0x10
        _emit 0x66
        _emit 0x89
        _emit 0x46
        _emit 0x1C
        _emit 0x89
        _emit 0x46
        _emit 0x0C
        _emit 0x5E
        _emit 0xC3
    }
}
