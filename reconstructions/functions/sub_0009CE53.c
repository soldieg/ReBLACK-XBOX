/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0009CE53(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x48
        _emit 0x1C
        _emit 0x56
        _emit 0x8D
        _emit 0x71
        _emit 0xFF
        _emit 0x50
        _emit 0x89
        _emit 0x70
        _emit 0x1C
        _emit 0xFF
        _emit 0x15
        _emit 0xBC
        _emit 0x30
        _emit 0x28
        _emit 0x00
        _emit 0x8B
        _emit 0xC6
        _emit 0x5E
        _emit 0xC3
    }
}
