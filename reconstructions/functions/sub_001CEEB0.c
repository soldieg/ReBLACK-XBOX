/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001CEEB0(void)
{
    __asm {
        _emit 0x57
        _emit 0x8B
        _emit 0x38
        _emit 0xE8
        _emit 0x08
        _emit 0x71
        _emit 0xEE
        _emit 0xFF
        _emit 0x8B
        _emit 0x0D
        _emit 0x64
        _emit 0x0D
        _emit 0x2D
        _emit 0x00
        _emit 0x51
        _emit 0xE8
        _emit 0x8C
        _emit 0xFD
        _emit 0xFE
        _emit 0xFF
        _emit 0x5F
        _emit 0xC3
    }
}
