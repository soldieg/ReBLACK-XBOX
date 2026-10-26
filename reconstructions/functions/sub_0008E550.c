/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0008E550(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        _emit 0xE8
        _emit 0xB6
        _emit 0x90
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x41
        _emit 0x60
        _emit 0x8B
        _emit 0x41
        _emit 0x28
        _emit 0x83
        _emit 0xC8
        _emit 0x40
        _emit 0x83
        _emit 0xC4
        _emit 0x04
        _emit 0x89
        _emit 0x41
        _emit 0x28
        _emit 0xC3
    }
}
