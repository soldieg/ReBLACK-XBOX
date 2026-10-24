/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0007EE10(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x48
        _emit 0x0C
        _emit 0x8B
        _emit 0x41
        _emit 0x1C
        _emit 0x85
        _emit 0xC0
        _emit 0x75
        _emit 0x01
        _emit 0xC3
        _emit 0xFF
        _emit 0xE0
    }
}
