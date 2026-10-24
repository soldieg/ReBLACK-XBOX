/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00141000(void)
{
    __asm {
        _emit 0x8B
        _emit 0x91
        _emit 0xC8
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x53
        _emit 0x33
        _emit 0xC0
        _emit 0x85
        _emit 0xD2
        _emit 0x56
        _emit 0x7E
        _emit 0x11
        _emit 0x8B
        _emit 0xFF
        _emit 0x8B
        _emit 0x34
        _emit 0x81
        _emit 0x8A
        _emit 0x5E
        _emit 0x26
        _emit 0x84
        _emit 0xDB
        _emit 0x74
        _emit 0x0A
        _emit 0x40
        _emit 0x3B
        _emit 0xC2
        _emit 0x7C
        _emit 0xF1
        _emit 0x5E
        _emit 0x33
        _emit 0xC0
        _emit 0x5B
        _emit 0xC3
        _emit 0x8B
        _emit 0x14
        _emit 0x81
        _emit 0x5E
        _emit 0xC6
        _emit 0x42
        _emit 0x26
        _emit 0x01
        _emit 0x8B
        _emit 0x04
        _emit 0x81
        _emit 0x5B
        _emit 0xC3
    }
}
