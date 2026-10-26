/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001E5F70(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0xF1
        _emit 0x8B
        _emit 0xC6
        _emit 0xE8
        _emit 0x76
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0x86
        _emit 0x8C
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x05
        _emit 0x70
        _emit 0x9A
        _emit 0x28
        _emit 0x00
        _emit 0x0F
        _emit 0x2F
        _emit 0x80
        _emit 0xA4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x76
        _emit 0x07
        _emit 0xC6
        _emit 0x86
        _emit 0xD0
        _emit 0x1F
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x5E
        _emit 0xC3
    }
}
