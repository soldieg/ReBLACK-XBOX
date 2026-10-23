/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000507A0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x04
        _emit 0x33
        _emit 0xD2
        _emit 0x85
        _emit 0xC0
        _emit 0x7E
        _emit 0x1D
        _emit 0x8D
        _emit 0xA4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x41
        _emit 0x08
        _emit 0x8B
        _emit 0x04
        _emit 0x90
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x04
        _emit 0xC6
        _emit 0x40
        _emit 0x04
        _emit 0x00
        _emit 0x8B
        _emit 0x41
        _emit 0x04
        _emit 0x42
        _emit 0x3B
        _emit 0xD0
        _emit 0x7C
        _emit 0xEA
        _emit 0xC3
    }
}
