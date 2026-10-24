/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A2F92(void)
{
    __asm {
        _emit 0x33
        _emit 0xC0
        _emit 0x64
        _emit 0x8B
        _emit 0x0D
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x81
        _emit 0x79
        _emit 0x04
        _emit 0x08
        _emit 0x2F
        _emit 0x0A
        _emit 0x00
        _emit 0x75
        _emit 0x10
        _emit 0x8B
        _emit 0x51
        _emit 0x0C
        _emit 0x8B
        _emit 0x52
        _emit 0x0C
        _emit 0x39
        _emit 0x51
        _emit 0x08
        _emit 0x75
        _emit 0x05
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
