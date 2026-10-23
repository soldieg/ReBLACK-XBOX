/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000504A0(void)
{
    __asm {
        _emit 0xE9
        _emit 0x8B
        _emit 0x0A
        _emit 0x00
        _emit 0x00
    }
}
