/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A901B(void)
{
    __asm {
        _emit 0x53
        _emit 0xE8
        _emit 0xB7
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x59
        _emit 0xC3
    }
}
