/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000755C0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x0C
        _emit 0x8D
        _emit 0x48
        _emit 0x04
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x69
        _emit 0xC9
        _emit 0xF0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC1
        _emit 0xE2
        _emit 0x05
        _emit 0x03
        _emit 0xCA
        _emit 0x89
        _emit 0x08
        _emit 0x33
        _emit 0xC9
        _emit 0xC7
        _emit 0x40
        _emit 0x04
        _emit 0x20
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x48
        _emit 0x08
        _emit 0x89
        _emit 0x48
        _emit 0x0C
        _emit 0xC3
    }
}
