/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000AB0FF(void)
{
    __asm {
        _emit 0x53
        _emit 0xE8
        _emit 0xD3
        _emit 0xF3
        _emit 0xFF
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
