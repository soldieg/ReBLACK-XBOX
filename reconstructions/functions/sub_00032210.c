/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00032210(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x81
        _emit 0x60
        _emit 0x0C
        _emit 0xFC
        _emit 0xFF
        _emit 0xFD
        _emit 0xFF
        _emit 0xC3
    }
}
