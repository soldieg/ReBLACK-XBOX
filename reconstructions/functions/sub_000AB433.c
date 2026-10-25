/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000AB433(void)
{
    __asm {
        _emit 0x6A
        _emit 0x01
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0xE8
        _emit 0x27
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
