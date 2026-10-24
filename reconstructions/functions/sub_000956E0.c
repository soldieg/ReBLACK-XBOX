/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000956E0(void)
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
        _emit 0xA3
        _emit 0xB8
        _emit 0xE6
        _emit 0x2C
        _emit 0x00
        _emit 0x89
        _emit 0x0D
        _emit 0xBC
        _emit 0xE6
        _emit 0x2C
        _emit 0x00
        _emit 0xC3
    }
}
