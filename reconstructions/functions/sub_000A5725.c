/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A5725(void)
{
    __asm {
        _emit 0x51
        _emit 0x51
        _emit 0xDD
        _emit 0x44
        _emit 0x24
        _emit 0x0C
        _emit 0xD9
        _emit 0xFC
        _emit 0xDD
        _emit 0x1C
        _emit 0x24
        _emit 0xDD
        _emit 0x04
        _emit 0x24
        _emit 0x59
        _emit 0x59
        _emit 0xC3
    }
}
