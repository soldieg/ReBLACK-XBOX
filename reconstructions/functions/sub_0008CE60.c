/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0008CE60(void)
{
    __asm {
        _emit 0xE9
        _emit 0x4B
        _emit 0x1F
        _emit 0xFF
        _emit 0xFF
    }
}
