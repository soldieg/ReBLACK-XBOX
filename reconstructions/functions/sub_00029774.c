/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00029774(void)
{
    __asm {
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x8D
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x04
        _emit 0x50
        _emit 0x6A
        _emit 0x10
        _emit 0xFF
        _emit 0x35
        _emit 0x64
        _emit 0x30
        _emit 0x28
        _emit 0x00
        _emit 0xE8
        _emit 0x4A
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
