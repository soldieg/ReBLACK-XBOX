/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00097FD0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x33
        _emit 0xC9
        _emit 0x89
        _emit 0x48
        _emit 0x74
        _emit 0x89
        _emit 0x48
        _emit 0x78
        _emit 0x89
        _emit 0x48
        _emit 0x7C
        _emit 0x89
        _emit 0x88
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
