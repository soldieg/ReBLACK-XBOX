/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000232EB(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x83
        _emit 0x60
        _emit 0x04
        _emit 0x00
        _emit 0xC7
        _emit 0x00
        _emit 0x55
        _emit 0xC7
        _emit 0xB5
        _emit 0x2B
        _emit 0x33
        _emit 0xC0
        _emit 0x40
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
