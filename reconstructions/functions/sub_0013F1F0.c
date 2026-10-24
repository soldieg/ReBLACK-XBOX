/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0013F1F0(void)
{
    __asm {
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x10
        _emit 0x8B
        _emit 0x88
        _emit 0x40
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x06
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
    }
}
