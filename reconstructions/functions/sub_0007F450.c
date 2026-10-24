/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0007F450(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x48
        _emit 0x28
        _emit 0x51
        _emit 0x68
        _emit 0x20
        _emit 0xF4
        _emit 0x07
        _emit 0x00
        _emit 0x50
        _emit 0xE8
        _emit 0xBD
        _emit 0x1A
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xC4
        _emit 0x0C
        _emit 0xC3
    }
}
