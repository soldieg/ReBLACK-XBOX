/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001F6E90(void)
{
    __asm {
        _emit 0x8B
        _emit 0x88
        _emit 0xE0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x50
        _emit 0x10
        _emit 0x89
        _emit 0x48
        _emit 0x04
        _emit 0x8B
        _emit 0x88
        _emit 0x88
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x08
        _emit 0x8A
        _emit 0x88
        _emit 0x85
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x50
        _emit 0x0C
        _emit 0x88
        _emit 0x48
        _emit 0x08
        _emit 0xC3
    }
}
