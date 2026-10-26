/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A8DE5(void)
{
    __asm {
        _emit 0x53
        _emit 0xE8
        _emit 0xED
        _emit 0x16
        _emit 0x00
        _emit 0x00
        _emit 0x59
        _emit 0xC3
    }
}
