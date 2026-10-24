/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00054050(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0xF1
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x08
        _emit 0x8B
        _emit 0x01
        _emit 0x57
        _emit 0x8B
        _emit 0x3E
        _emit 0xFF
        _emit 0x50
        _emit 0x04
        _emit 0x50
        _emit 0x8B
        _emit 0xCE
        _emit 0xFF
        _emit 0x57
        _emit 0x18
        _emit 0x5F
        _emit 0x5E
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
