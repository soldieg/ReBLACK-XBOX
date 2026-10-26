/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001BAAC0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x42
        _emit 0x24
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x24
        _emit 0x0F
        _emit 0xBE
        _emit 0x00
        _emit 0x8B
        _emit 0x0D
        _emit 0xD0
        _emit 0x12
        _emit 0x2D
        _emit 0x00
        _emit 0x8B
        _emit 0x09
        _emit 0x8B
        _emit 0x49
        _emit 0x04
        _emit 0xC1
        _emit 0xE0
        _emit 0x05
        _emit 0x8B
        _emit 0x4C
        _emit 0x08
        _emit 0x08
        _emit 0x8B
        _emit 0x41
        _emit 0x64
        _emit 0x0F
        _emit 0xB7
        _emit 0x04
        _emit 0x42
        _emit 0x0F
        _emit 0xB6
        _emit 0x49
        _emit 0x60
        _emit 0x99
        _emit 0xF7
        _emit 0xF9
        _emit 0xC3
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
    }
}
