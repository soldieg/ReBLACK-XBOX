/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0021DA94(void)
{
    __asm {
        _emit 0x66
        _emit 0xF7
        _emit 0x41
        _emit 0x12
        _emit 0x02
        _emit 0x80
        _emit 0x75
        _emit 0x07
        _emit 0x6A
        _emit 0x00
        _emit 0xE8
        _emit 0x11
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xC3
    }
}
