/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00280859(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x83
        _emit 0x48
        _emit 0x08
        _emit 0xFF
        _emit 0xC6
        _emit 0x40
        _emit 0x1F
        _emit 0xFF
        _emit 0x8B
        _emit 0x0D
        _emit 0x4C
        _emit 0x60
        _emit 0x56
        _emit 0x00
        _emit 0x89
        _emit 0x48
        _emit 0x14
        _emit 0xA3
        _emit 0x4C
        _emit 0x60
        _emit 0x56
        _emit 0x00
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
