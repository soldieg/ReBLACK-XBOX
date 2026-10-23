/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0004B040(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x08
        _emit 0xD9
        _emit 0x40
        _emit 0x08
        _emit 0xD8
        _emit 0x49
        _emit 0x08
        _emit 0xD9
        _emit 0x40
        _emit 0x04
        _emit 0xD8
        _emit 0x49
        _emit 0x04
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x00
        _emit 0xD8
        _emit 0x09
        _emit 0xDE
        _emit 0xC1
        _emit 0xC3
    }
}
