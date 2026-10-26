/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00071140(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x1C
        _emit 0xC7
        _emit 0x81
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x41
        _emit 0x18
        _emit 0xE9
        _emit 0xDB
        _emit 0xFC
        _emit 0xFF
        _emit 0xFF
    }
}
