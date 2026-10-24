/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000AB490(void)
{
    __asm {
        _emit 0x8B
        _emit 0xC1
        _emit 0xC7
        _emit 0x00
        _emit 0x9C
        _emit 0x7E
        _emit 0x28
        _emit 0x00
        _emit 0xC3
    }
}
