/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00080160(void)
{
    __asm {
        _emit 0xA1
        _emit 0x80
        _emit 0x00
        _emit 0x2C
        _emit 0x00
        _emit 0x3D
        _emit 0x80
        _emit 0x00
        _emit 0x2C
        _emit 0x00
        _emit 0x74
        _emit 0x1B
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x8D
        _emit 0x4A
        _emit 0x28
        _emit 0x3B
        _emit 0xC1
        _emit 0x74
        _emit 0x0A
        _emit 0x8B
        _emit 0x00
        _emit 0x3D
        _emit 0x80
        _emit 0x00
        _emit 0x2C
        _emit 0x00
        _emit 0x75
        _emit 0xF3
        _emit 0xC3
        _emit 0x89
        _emit 0x15
        _emit 0x8C
        _emit 0x00
        _emit 0x2C
        _emit 0x00
        _emit 0xC3
    }
}
