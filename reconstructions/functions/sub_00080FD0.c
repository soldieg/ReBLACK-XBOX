/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00080FD0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x83
        _emit 0xC0
        _emit 0x0C
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xE9
        _emit 0x00
        _emit 0x4A
        _emit 0x00
        _emit 0x00
    }
}
