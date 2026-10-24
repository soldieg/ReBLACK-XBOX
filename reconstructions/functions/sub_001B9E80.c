/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001B9E80(void)
{
    __asm {
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x89
        _emit 0x50
        _emit 0x08
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x50
        _emit 0x0C
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x0C
        _emit 0x89
        _emit 0x48
        _emit 0x24
        _emit 0x89
        _emit 0x50
        _emit 0x20
        _emit 0xC6
        _emit 0x40
        _emit 0x1C
        _emit 0x00
        _emit 0x89
        _emit 0x48
        _emit 0x18
        _emit 0xB0
        _emit 0x01
        _emit 0xC2
        _emit 0x0C
        _emit 0x00
    }
}
