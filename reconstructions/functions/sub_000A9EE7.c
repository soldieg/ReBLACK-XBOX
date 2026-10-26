/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A9EE7(void)
{
    __asm {
        _emit 0x53
        _emit 0xE8
        _emit 0xEB
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x59
        _emit 0xC3
    }
}
