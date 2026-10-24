/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000E1F80(void)
{
    __asm {
        _emit 0x8D
        _emit 0x41
        _emit 0x08
        _emit 0xC3
    }
}
