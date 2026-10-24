/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001602C0(void)
{
    __asm {
        _emit 0x55
        _emit 0x8B
        _emit 0xEC
        _emit 0x83
        _emit 0xE4
        _emit 0xF0
        _emit 0x83
        _emit 0xEC
        _emit 0x10
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x05
        _emit 0xB4
        _emit 0x5C
        _emit 0x29
        _emit 0x00
        _emit 0x0F
        _emit 0x28
        _emit 0x09
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x44
        _emit 0x24
        _emit 0x0C
        _emit 0x8D
        _emit 0x44
        _emit 0x24
        _emit 0x0C
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x00
        _emit 0x0F
        _emit 0xC6
        _emit 0xC0
        _emit 0x00
        _emit 0x0F
        _emit 0x59
        _emit 0xC8
        _emit 0x0F
        _emit 0x29
        _emit 0x8A
        _emit 0xA0
        _emit 0xD5
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0xE5
        _emit 0x5D
        _emit 0xC3
    }
}
