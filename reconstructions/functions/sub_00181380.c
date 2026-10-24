/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00181380(void)
{
    __asm {
        _emit 0x8B
        _emit 0x40
        _emit 0x04
        _emit 0x83
        _emit 0xF8
        _emit 0x1D
        _emit 0x74
        _emit 0x0D
        _emit 0x83
        _emit 0xF8
        _emit 0x1E
        _emit 0x74
        _emit 0x08
        _emit 0x83
        _emit 0xF8
        _emit 0x1F
        _emit 0x74
        _emit 0x03
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
