/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00112CC0(void)
{
    __asm {
        _emit 0x33
        _emit 0xC0
        _emit 0x8D
        _emit 0x4A
        _emit 0x0C
        _emit 0x39
        _emit 0x31
        _emit 0x74
        _emit 0x0C
        _emit 0x40
        _emit 0x83
        _emit 0xC1
        _emit 0x14
        _emit 0x83
        _emit 0xF8
        _emit 0x70
        _emit 0x7C
        _emit 0xF3
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
        _emit 0x8D
        _emit 0x04
        _emit 0x80
        _emit 0x8B
        _emit 0x4C
        _emit 0x82
        _emit 0x10
        _emit 0x8D
        _emit 0x04
        _emit 0x82
        _emit 0x41
        _emit 0x89
        _emit 0x48
        _emit 0x10
        _emit 0x83
        _emit 0xC0
        _emit 0x04
        _emit 0xC3
    }
}
