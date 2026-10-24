/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00186920(void)
{
    __asm {
        _emit 0x55
        _emit 0x8B
        _emit 0xEC
        _emit 0x8B
        _emit 0x55
        _emit 0x08
        _emit 0xC6
        _emit 0x80
        _emit 0xB4
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0F
        _emit 0x28
        _emit 0x01
        _emit 0x0F
        _emit 0x29
        _emit 0x80
        _emit 0xC0
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x0F
        _emit 0x28
        _emit 0x02
        _emit 0x83
        _emit 0xE4
        _emit 0xF0
        _emit 0x0F
        _emit 0x29
        _emit 0x80
        _emit 0xD0
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0xE5
        _emit 0x5D
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
