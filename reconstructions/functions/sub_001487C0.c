/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001487C0(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0xF1
        _emit 0x8B
        _emit 0x86
        _emit 0xB0
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x05
        _emit 0xE8
        _emit 0x2E
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0x86
        _emit 0xAC
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x08
        _emit 0x50
        _emit 0xFF
        _emit 0x51
        _emit 0x04
        _emit 0x5E
        _emit 0xC3
    }
}
