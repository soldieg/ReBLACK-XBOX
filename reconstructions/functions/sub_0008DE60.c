/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0008DE60(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xD9
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x8B
        _emit 0x48
        _emit 0x28
        _emit 0xD9
        _emit 0x98
        _emit 0xF4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xC9
        _emit 0x10
        _emit 0x89
        _emit 0x48
        _emit 0x28
        _emit 0xC3
    }
}
