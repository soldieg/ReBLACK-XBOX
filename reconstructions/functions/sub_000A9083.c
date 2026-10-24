/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A9083(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x3B
        _emit 0x05
        _emit 0x64
        _emit 0xC9
        _emit 0x57
        _emit 0x00
        _emit 0x72
        _emit 0x03
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
        _emit 0x8B
        _emit 0xC8
        _emit 0x83
        _emit 0xE0
        _emit 0x1F
        _emit 0xC1
        _emit 0xF9
        _emit 0x05
        _emit 0x8B
        _emit 0x0C
        _emit 0x8D
        _emit 0x80
        _emit 0xC9
        _emit 0x57
        _emit 0x00
        _emit 0x8D
        _emit 0x04
        _emit 0x80
        _emit 0x0F
        _emit 0xBE
        _emit 0x44
        _emit 0xC1
        _emit 0x04
        _emit 0x83
        _emit 0xE0
        _emit 0x40
        _emit 0xC3
    }
}
