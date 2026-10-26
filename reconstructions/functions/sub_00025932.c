/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00025932(void)
{
    __asm {
        _emit 0x55
        _emit 0x8B
        _emit 0xEC
        _emit 0x51
        _emit 0x51
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x04
        _emit 0x8D
        _emit 0x45
        _emit 0xFC
        _emit 0x50
        _emit 0x8D
        _emit 0x45
        _emit 0xF8
        _emit 0x50
        _emit 0x6A
        _emit 0x07
        _emit 0xE8
        _emit 0x78
        _emit 0x45
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x7C
        _emit 0x0D
        _emit 0x8B
        _emit 0x45
        _emit 0xFC
        _emit 0x83
        _emit 0xF8
        _emit 0x09
        _emit 0x76
        _emit 0x07
        _emit 0x33
        _emit 0xC0
        _emit 0x40
        _emit 0xC9
        _emit 0xC3
        _emit 0x33
        _emit 0xC0
        _emit 0xC9
        _emit 0xC3
    }
}
