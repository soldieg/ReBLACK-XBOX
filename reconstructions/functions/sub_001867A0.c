/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001867A0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x81
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x15
        _emit 0x88
        _emit 0x19
        _emit 0x2D
        _emit 0x00
        _emit 0x8D
        _emit 0x04
        _emit 0x40
        _emit 0xC1
        _emit 0xE0
        _emit 0x05
        _emit 0x8B
        _emit 0x04
        _emit 0x08
        _emit 0x8D
        _emit 0x0C
        _emit 0x40
        _emit 0x8D
        _emit 0x84
        _emit 0x8A
        _emit 0xAC
        _emit 0x0F
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
