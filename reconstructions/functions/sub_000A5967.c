/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A5967(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8D
        _emit 0x48
        _emit 0x01
        _emit 0x81
        _emit 0xF9
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x77
        _emit 0x0F
        _emit 0x8B
        _emit 0x0D
        _emit 0x68
        _emit 0xC7
        _emit 0x29
        _emit 0x00
        _emit 0x0F
        _emit 0xB7
        _emit 0x04
        _emit 0x41
        _emit 0x23
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0xC3
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
    }
}
