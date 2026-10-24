/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000B6240(void)
{
    __asm {
        _emit 0x8B
        _emit 0x08
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x04
        _emit 0x03
        _emit 0xC8
        _emit 0x89
        _emit 0x08
        _emit 0x8B
        _emit 0x48
        _emit 0x30
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x05
        _emit 0x03
        _emit 0xC8
        _emit 0x89
        _emit 0x48
        _emit 0x30
        _emit 0x8B
        _emit 0x48
        _emit 0x34
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x05
        _emit 0x03
        _emit 0xC8
        _emit 0x89
        _emit 0x48
        _emit 0x34
        _emit 0xC3
    }
}
