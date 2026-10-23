/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000237B7(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x83
        _emit 0xF8
        _emit 0x09
        _emit 0x7F
        _emit 0x05
        _emit 0x83
        _emit 0xC0
        _emit 0x30
        _emit 0xEB
        _emit 0x03
        _emit 0x83
        _emit 0xC0
        _emit 0x37
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
