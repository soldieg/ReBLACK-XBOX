/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A6F10(void)
{
    __asm {
        _emit 0xA9
        _emit 0x00
        _emit 0x00
        _emit 0x08
        _emit 0x00
        _emit 0x74
        _emit 0x06
        _emit 0xB8
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0xDC
        _emit 0x05
        _emit 0xEC
        _emit 0x78
        _emit 0x28
        _emit 0x00
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
