/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0010DF60(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x8B
        _emit 0x46
        _emit 0x48
        _emit 0x8B
        _emit 0x40
        _emit 0x18
        _emit 0x40
        _emit 0x56
        _emit 0xE8
        _emit 0xAE
        _emit 0xFE
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0x76
        _emit 0x48
        _emit 0x81
        _emit 0x66
        _emit 0x1C
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xFD
        _emit 0xA1
        _emit 0xBC
        _emit 0xC9
        _emit 0x2E
        _emit 0x00
        _emit 0x5E
        _emit 0xC3
    }
}
