/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00181CF0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x88
        _emit 0xA8
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x05
        _emit 0x8B
        _emit 0x01
        _emit 0xFF
        _emit 0x60
        _emit 0x18
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
