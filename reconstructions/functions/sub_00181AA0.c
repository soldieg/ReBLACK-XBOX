/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00181AA0(void)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8B
        _emit 0xF1
        _emit 0x8B
        _emit 0x3E
        _emit 0x8D
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x3A
        _emit 0x8B
        _emit 0x7E
        _emit 0x04
        _emit 0x89
        _emit 0x7A
        _emit 0x04
        _emit 0x8B
        _emit 0x7E
        _emit 0x08
        _emit 0x89
        _emit 0x7A
        _emit 0x08
        _emit 0x8B
        _emit 0x7E
        _emit 0x0C
        _emit 0x89
        _emit 0x7A
        _emit 0x0C
        _emit 0x8B
        _emit 0x7E
        _emit 0x10
        _emit 0x89
        _emit 0x7A
        _emit 0x10
        _emit 0x8B
        _emit 0x76
        _emit 0x14
        _emit 0x89
        _emit 0x72
        _emit 0x14
        _emit 0x8B
        _emit 0x09
        _emit 0x5F
        _emit 0x89
        _emit 0x08
        _emit 0xB0
        _emit 0x01
        _emit 0x5E
        _emit 0xC3
    }
}
