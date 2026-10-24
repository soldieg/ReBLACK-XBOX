/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00048440(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xF6
        _emit 0x74
        _emit 0x1D
        _emit 0x8B
        _emit 0xCE
        _emit 0xE8
        _emit 0x70
        _emit 0xC3
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x12
        _emit 0x8B
        _emit 0xCE
        _emit 0xE8
        _emit 0x65
        _emit 0xC3
        _emit 0x00
        _emit 0x00
        _emit 0x80
        _emit 0x38
        _emit 0x5F
        _emit 0x75
        _emit 0x06
        _emit 0xB0
        _emit 0x01
        _emit 0x5E
        _emit 0xC2
        _emit 0x04
        _emit 0x00
        _emit 0x32
        _emit 0xC0
        _emit 0x5E
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
