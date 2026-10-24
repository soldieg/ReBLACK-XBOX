/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00091940(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x48
        _emit 0x38
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xFF
        _emit 0x61
        _emit 0x44
    }
}
