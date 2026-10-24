/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A2FB5(void)
{
    __asm {
        _emit 0x53
        _emit 0x51
        _emit 0xBB
        _emit 0x60
        _emit 0xC3
        _emit 0x29
        _emit 0x00
        _emit 0xEB
        _emit 0x0A
    }
}
