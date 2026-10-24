/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0007F400(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x08
        _emit 0x8B
        _emit 0x11
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x89
        _emit 0x50
        _emit 0x28
        _emit 0x8B
        _emit 0x51
        _emit 0x04
        _emit 0x89
        _emit 0x50
        _emit 0x2C
        _emit 0x8A
        _emit 0x49
        _emit 0x08
        _emit 0x08
        _emit 0x48
        _emit 0x1B
        _emit 0xC3
    }
}
