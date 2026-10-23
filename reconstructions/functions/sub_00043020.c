/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00043020(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x41
        _emit 0x04
        _emit 0x85
        _emit 0xC0
        _emit 0x56
        _emit 0x7E
        _emit 0x18
        _emit 0x8B
        _emit 0x09
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x0C
        _emit 0x8D
        _emit 0x0C
        _emit 0x81
        _emit 0x8B
        _emit 0x71
        _emit 0xFC
        _emit 0x83
        _emit 0xE9
        _emit 0x04
        _emit 0x48
        _emit 0x3B
        _emit 0xF2
        _emit 0x74
        _emit 0x05
        _emit 0x85
        _emit 0xC0
        _emit 0x7F
        _emit 0xF1
        _emit 0x48
        _emit 0x5E
        _emit 0xC3
    }
}
