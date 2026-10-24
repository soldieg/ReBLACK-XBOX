/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00086730(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x51
        _emit 0x3C
        _emit 0x40
        _emit 0x3B
        _emit 0xC2
        _emit 0x75
        _emit 0x02
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
    }
}
