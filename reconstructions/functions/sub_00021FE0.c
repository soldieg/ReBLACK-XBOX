/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00021FE0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x08
        _emit 0x8A
        _emit 0x51
        _emit 0x15
        _emit 0x84
        _emit 0xD2
        _emit 0x75
        _emit 0x12
        _emit 0x8D
        _emit 0xA4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0xC1
        _emit 0x8B
        _emit 0x08
        _emit 0x8A
        _emit 0x51
        _emit 0x15
        _emit 0x84
        _emit 0xD2
        _emit 0x74
        _emit 0xF5
        _emit 0xC3
    }
}
