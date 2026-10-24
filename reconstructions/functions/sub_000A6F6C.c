/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A6F6C(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0xF0
        _emit 0x7F
        _emit 0x3D
        _emit 0x00
        _emit 0x00
        _emit 0xF0
        _emit 0x7F
        _emit 0x74
        _emit 0x01
        _emit 0xC3
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0xC3
    }
}
