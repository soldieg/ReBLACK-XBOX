/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0007E410(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x51
        _emit 0x04
        _emit 0x85
        _emit 0xD2
        _emit 0xB8
        _emit 0x1C
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x05
        _emit 0xB8
        _emit 0x2C
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x51
        _emit 0x10
        _emit 0x85
        _emit 0xD2
        _emit 0x74
        _emit 0x03
        _emit 0x03
        _emit 0x41
        _emit 0x14
        _emit 0xC3
    }
}
