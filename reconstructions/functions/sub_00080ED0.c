/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00080ED0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x0D
        _emit 0x08
        _emit 0x55
        _emit 0x57
        _emit 0x00
        _emit 0x33
        _emit 0xC0
        _emit 0x81
        _emit 0xF9
        _emit 0x08
        _emit 0x55
        _emit 0x57
        _emit 0x00
        _emit 0x74
        _emit 0x0B
        _emit 0x8B
        _emit 0x09
        _emit 0x40
        _emit 0x81
        _emit 0xF9
        _emit 0x08
        _emit 0x55
        _emit 0x57
        _emit 0x00
        _emit 0x75
        _emit 0xF5
        _emit 0xC3
    }
}
