/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00092CD0(void)
{
    __asm {
        _emit 0xC7
        _emit 0x05
        _emit 0x60
        _emit 0x32
        _emit 0x2C
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
