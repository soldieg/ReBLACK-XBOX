/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000232DA(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x0F
        _emit 0x31
        _emit 0x89
        _emit 0x01
        _emit 0x89
        _emit 0x51
        _emit 0x04
        _emit 0x33
        _emit 0xC0
        _emit 0x40
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
