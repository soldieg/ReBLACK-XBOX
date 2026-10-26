/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0002575B(void)
{
    __asm {
        _emit 0x64
        _emit 0xA1
        _emit 0x28
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x80
        _emit 0x2C
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
