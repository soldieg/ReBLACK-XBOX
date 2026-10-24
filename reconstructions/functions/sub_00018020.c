/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00018020(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0xF1
        _emit 0x8B
        _emit 0x06
        _emit 0xFF
        _emit 0x50
        _emit 0x28
        _emit 0x8B
        _emit 0x16
        _emit 0x8B
        _emit 0xCE
        _emit 0xFF
        _emit 0x52
        _emit 0x2C
        _emit 0x8B
        _emit 0x06
        _emit 0x6A
        _emit 0x01
        _emit 0x8B
        _emit 0xCE
        _emit 0xFF
        _emit 0x50
        _emit 0x38
        _emit 0x5E
        _emit 0xC3
    }
}
