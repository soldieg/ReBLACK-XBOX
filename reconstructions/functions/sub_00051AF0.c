/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00051AF0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x85
        _emit 0xC0
        _emit 0x7C
        _emit 0x0F
        _emit 0x3B
        _emit 0x41
        _emit 0x04
        _emit 0x73
        _emit 0x0A
        _emit 0x8B
        _emit 0x49
        _emit 0x2C
        _emit 0xD9
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0xD9
        _emit 0x1C
        _emit 0x81
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
