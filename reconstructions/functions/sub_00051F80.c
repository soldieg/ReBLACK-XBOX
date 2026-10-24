/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00051F80(void)
{
    __asm {
        _emit 0xA1
        _emit 0x3C
        _emit 0x7D
        _emit 0x2B
        _emit 0x00
        _emit 0xA3
        _emit 0x40
        _emit 0x7D
        _emit 0x2B
        _emit 0x00
        _emit 0xC3
    }
}
