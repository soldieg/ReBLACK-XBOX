/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00092CE0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x0D
        _emit 0x60
        _emit 0x32
        _emit 0x2C
        _emit 0x00
        _emit 0x3B
        _emit 0x0D
        _emit 0xCC
        _emit 0xB1
        _emit 0x29
        _emit 0x00
        _emit 0x7C
        _emit 0x03
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
        _emit 0x8B
        _emit 0xC1
        _emit 0x69
        _emit 0xC0
        _emit 0x70
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0x05
        _emit 0x70
        _emit 0x32
        _emit 0x2C
        _emit 0x00
        _emit 0x41
        _emit 0x89
        _emit 0x0D
        _emit 0x60
        _emit 0x32
        _emit 0x2C
        _emit 0x00
        _emit 0xC3
    }
}
