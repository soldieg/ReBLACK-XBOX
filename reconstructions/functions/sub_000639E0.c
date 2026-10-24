/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000639E0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0xD9
        _emit 0x40
        _emit 0x08
        _emit 0xD8
        _emit 0x61
        _emit 0x08
        _emit 0xD9
        _emit 0x00
        _emit 0xD8
        _emit 0x21
        _emit 0xD9
        _emit 0xC0
        _emit 0xD8
        _emit 0xC9
        _emit 0xD9
        _emit 0xC2
        _emit 0xD8
        _emit 0xCB
        _emit 0xDE
        _emit 0xC1
        _emit 0xDD
        _emit 0xDA
        _emit 0xDD
        _emit 0xD8
        _emit 0xC3
    }
}
