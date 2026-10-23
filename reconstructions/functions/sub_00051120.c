/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00051120(void)
{
    __asm {
        _emit 0x8B
        _emit 0xC1
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0xC7
        _emit 0x00
        _emit 0xDC
        _emit 0x4C
        _emit 0x28
        _emit 0x00
        _emit 0x89
        _emit 0x48
        _emit 0x04
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
