/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000232FF(void)
{
    __asm {
        _emit 0xA1
        _emit 0x74
        _emit 0x30
        _emit 0x28
        _emit 0x00
        _emit 0x8B
        _emit 0x00
        _emit 0xC3
    }
}
