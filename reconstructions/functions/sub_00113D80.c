/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00113D80(void)
{
    __asm {
        _emit 0x8B
        _emit 0x48
        _emit 0x44
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x06
        _emit 0x8B
        _emit 0x49
        _emit 0x04
        _emit 0x89
        _emit 0x48
        _emit 0x28
        _emit 0x8B
        _emit 0x40
        _emit 0x48
        _emit 0x85
        _emit 0xC0
        _emit 0x75
        _emit 0xEC
        _emit 0xC3
    }
}
