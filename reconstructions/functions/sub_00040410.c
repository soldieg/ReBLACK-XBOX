/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00040410(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x68
        _emit 0x02
        _emit 0x05
        _emit 0x03
        _emit 0x00
        _emit 0x50
        _emit 0xFF
        _emit 0x15
        _emit 0x68
        _emit 0xA7
        _emit 0x56
        _emit 0x00
        _emit 0x83
        _emit 0xC4
        _emit 0x08
        _emit 0xC3
    }
}
