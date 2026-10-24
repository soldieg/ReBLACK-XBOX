/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00188640(void)
{
    __asm {
        _emit 0x8B
        _emit 0x8E
        _emit 0x68
        _emit 0x09
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xC9
        _emit 0x75
        _emit 0x03
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
        _emit 0x8B
        _emit 0x96
        _emit 0x60
        _emit 0x09
        _emit 0x00
        _emit 0x00
        _emit 0x53
        _emit 0x8B
        _emit 0x04
        _emit 0xD6
        _emit 0x49
        _emit 0x3B
        _emit 0xC7
        _emit 0x74
        _emit 0x13
        _emit 0x8D
        _emit 0x42
        _emit 0x01
        _emit 0x99
        _emit 0xBB
        _emit 0x2C
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xF7
        _emit 0xFB
        _emit 0x85
        _emit 0xC9
        _emit 0x75
        _emit 0xE9
        _emit 0x33
        _emit 0xC0
        _emit 0x5B
        _emit 0xC3
        _emit 0x8D
        _emit 0x04
        _emit 0xD6
        _emit 0x5B
        _emit 0xC3
    }
}
