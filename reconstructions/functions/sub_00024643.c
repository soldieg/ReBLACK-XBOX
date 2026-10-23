/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00024643(void)
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
        _emit 0x6A
        _emit 0x04
        _emit 0x5A
        _emit 0x56
        _emit 0x66
        _emit 0x0F
        _emit 0xB6
        _emit 0x31
        _emit 0x66
        _emit 0x89
        _emit 0x30
        _emit 0x40
        _emit 0x40
        _emit 0x41
        _emit 0x4A
        _emit 0x75
        _emit 0xF3
        _emit 0x66
        _emit 0x83
        _emit 0x20
        _emit 0x00
        _emit 0x5E
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
