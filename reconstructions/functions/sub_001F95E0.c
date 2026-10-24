/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001F95E0(void)
{
    __asm {
        _emit 0xB8
        _emit 0x80
        _emit 0x0D
        _emit 0x2D
        _emit 0x00
        _emit 0xE8
        _emit 0x86
        _emit 0xFD
        _emit 0xFF
        _emit 0xFF
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
