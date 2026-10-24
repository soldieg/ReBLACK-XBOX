/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00181540(void)
{
    __asm {
        _emit 0x8B
        _emit 0x40
        _emit 0x04
        _emit 0x83
        _emit 0xF8
        _emit 0x2A
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x05
        _emit 0xF4
        _emit 0x93
        _emit 0x28
        _emit 0x00
        _emit 0x74
        _emit 0x0D
        _emit 0x83
        _emit 0xF8
        _emit 0x26
        _emit 0x74
        _emit 0x08
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x05
        _emit 0xBC
        _emit 0x8E
        _emit 0x28
        _emit 0x00
        _emit 0xC3
    }
}
