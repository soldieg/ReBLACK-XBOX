/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0008D1B0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x08
        _emit 0x89
        _emit 0x0D
        _emit 0x94
        _emit 0x2C
        _emit 0x2C
        _emit 0x00
        _emit 0x8B
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x15
        _emit 0x98
        _emit 0x2C
        _emit 0x2C
        _emit 0x00
        _emit 0x8B
        _emit 0x40
        _emit 0x08
        _emit 0xA3
        _emit 0x9C
        _emit 0x2C
        _emit 0x2C
        _emit 0x00
        _emit 0xC3
    }
}
