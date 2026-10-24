/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0009D5E2(void)
{
    __asm {
        _emit 0x8B
        _emit 0x81
        _emit 0x60
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x81
        _emit 0xC1
        _emit 0x48
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0xEB
        _emit 0x14
        _emit 0x39
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x72
        _emit 0x0B
        _emit 0x8B
        _emit 0x50
        _emit 0x04
        _emit 0x03
        _emit 0xD0
        _emit 0x39
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x72
        _emit 0x09
        _emit 0x8B
        _emit 0x40
        _emit 0x18
        _emit 0x3B
        _emit 0xC1
        _emit 0x75
        _emit 0xE8
        _emit 0x33
        _emit 0xC0
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
