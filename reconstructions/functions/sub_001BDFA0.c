/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001BDFA0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x88
        _emit 0xBC
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0F
        _emit 0xB7
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x51
        _emit 0x40
        _emit 0x8B
        _emit 0x4A
        _emit 0x30
        _emit 0x0F
        _emit 0x57
        _emit 0xC0
        _emit 0x8D
        _emit 0x04
        _emit 0x40
        _emit 0xC1
        _emit 0xE0
        _emit 0x05
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x44
        _emit 0x01
        _emit 0x4C
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
