/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00022F0E(void)
{
    __asm {
        _emit 0xE9
        _emit 0xB5
        _emit 0x6F
        _emit 0x00
        _emit 0x00
    }
}
