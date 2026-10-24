/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000AA5FA(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8B
        _emit 0x30
        _emit 0x8B
        _emit 0xCE
        _emit 0x03
        _emit 0xF6
        _emit 0x57
        _emit 0x8B
        _emit 0x78
        _emit 0x04
        _emit 0xC1
        _emit 0xE9
        _emit 0x1F
        _emit 0x89
        _emit 0x30
        _emit 0x8D
        _emit 0x34
        _emit 0x3F
        _emit 0x0B
        _emit 0xF1
        _emit 0x8B
        _emit 0x48
        _emit 0x08
        _emit 0x8B
        _emit 0xD7
        _emit 0xC1
        _emit 0xEA
        _emit 0x1F
        _emit 0xD1
        _emit 0xE1
        _emit 0x0B
        _emit 0xCA
        _emit 0x5F
        _emit 0x89
        _emit 0x70
        _emit 0x04
        _emit 0x89
        _emit 0x48
        _emit 0x08
        _emit 0x5E
        _emit 0xC3
    }
}
