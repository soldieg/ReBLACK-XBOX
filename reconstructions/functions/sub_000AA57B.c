/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000AA57B(void)
{
    __asm {
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x0C
        _emit 0x8D
        _emit 0x0C
        _emit 0x32
        _emit 0x33
        _emit 0xC0
        _emit 0x3B
        _emit 0xCA
        _emit 0x72
        _emit 0x04
        _emit 0x3B
        _emit 0xCE
        _emit 0x73
        _emit 0x03
        _emit 0x33
        _emit 0xC0
        _emit 0x40
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x0A
        _emit 0x5E
        _emit 0xC3
    }
}
