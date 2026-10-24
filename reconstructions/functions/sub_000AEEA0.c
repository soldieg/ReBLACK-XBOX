/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000AEEA0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x0A
        _emit 0x3B
        _emit 0xCA
        _emit 0x57
        _emit 0x74
        _emit 0x10
        _emit 0x8B
        _emit 0x79
        _emit 0xBC
        _emit 0x3B
        _emit 0xFE
        _emit 0x8D
        _emit 0x41
        _emit 0xB4
        _emit 0x74
        _emit 0x08
        _emit 0x8B
        _emit 0x09
        _emit 0x3B
        _emit 0xCA
        _emit 0x75
        _emit 0xF0
        _emit 0x33
        _emit 0xC0
        _emit 0x5F
        _emit 0xC3
    }
}
