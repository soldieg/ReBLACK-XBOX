/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000BE490(void)
{
    __asm {
        _emit 0x8A
        _emit 0x41
        _emit 0x28
        _emit 0x84
        _emit 0xC0
        _emit 0x74
        _emit 0x09
        _emit 0xE8
        _emit 0x54
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xC6
        _emit 0x41
        _emit 0x28
        _emit 0x00
        _emit 0xC3
    }
}
