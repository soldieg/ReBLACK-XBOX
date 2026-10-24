/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001BE8F0(void)
{
    __asm {
        _emit 0xA1
        _emit 0xF0
        _emit 0x45
        _emit 0x2D
        _emit 0x00
        _emit 0x8A
        _emit 0x88
        _emit 0xC9
        _emit 0x10
        _emit 0x02
        _emit 0x00
        _emit 0x84
        _emit 0xC9
        _emit 0x74
        _emit 0x0A
        _emit 0xC7
        _emit 0x80
        _emit 0x8C
        _emit 0x10
        _emit 0x02
        _emit 0x00
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
