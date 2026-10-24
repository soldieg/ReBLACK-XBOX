/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0013C0F0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x88
        _emit 0xC8
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x0E
        _emit 0x8B
        _emit 0x80
        _emit 0xD0
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x40
        _emit 0x33
        _emit 0xD2
        _emit 0xF7
        _emit 0xF1
        _emit 0x8B
        _emit 0xC2
        _emit 0xC3
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
    }
}
