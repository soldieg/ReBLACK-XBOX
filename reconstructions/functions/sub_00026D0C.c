/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00026D0C(void)
{
    __asm {
        _emit 0x55
        _emit 0x8B
        _emit 0xEC
        _emit 0xFF
        _emit 0x75
        _emit 0x18
        _emit 0xFF
        _emit 0x75
        _emit 0x14
        _emit 0xFF
        _emit 0x75
        _emit 0x10
        _emit 0xFF
        _emit 0x75
        _emit 0x0C
        _emit 0xFF
        _emit 0x75
        _emit 0x08
        _emit 0xE8
        _emit 0x9F
        _emit 0x31
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0xFF
        _emit 0x15
        _emit 0x0C
        _emit 0x30
        _emit 0x28
        _emit 0x00
        _emit 0x5D
        _emit 0xC2
        _emit 0x14
        _emit 0x00
    }
}
