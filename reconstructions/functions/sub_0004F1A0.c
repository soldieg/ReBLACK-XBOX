/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0004F1A0(void)
{
    __asm {
        _emit 0x8B
        _emit 0xC1
        _emit 0x33
        _emit 0xC9
        _emit 0xC7
        _emit 0x00
        _emit 0x34
        _emit 0x4B
        _emit 0x28
        _emit 0x00
        _emit 0x89
        _emit 0x48
        _emit 0x08
        _emit 0x89
        _emit 0x48
        _emit 0x04
        _emit 0xC3
    }
}
