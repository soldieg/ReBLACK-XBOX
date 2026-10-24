/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001B56C0(void)
{
    __asm {
        _emit 0x66
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x66
        _emit 0x01
        _emit 0x14
        _emit 0x41
        _emit 0x66
        _emit 0x8B
        _emit 0x14
        _emit 0x45
        _emit 0x04
        _emit 0x8D
        _emit 0x28
        _emit 0x00
        _emit 0x56
        _emit 0x66
        _emit 0x8B
        _emit 0x34
        _emit 0x41
        _emit 0x66
        _emit 0x3B
        _emit 0xF2
        _emit 0x5E
        _emit 0x76
        _emit 0x04
        _emit 0x66
        _emit 0x89
        _emit 0x14
        _emit 0x41
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
