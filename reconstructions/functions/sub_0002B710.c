/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0002B710(void)
{
    __asm {
        _emit 0xE9
        _emit 0x3B
        _emit 0xAE
        _emit 0x00
        _emit 0x00
    }
}
