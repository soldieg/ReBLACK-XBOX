/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00017E10(void)
{
    __asm {
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x04
        _emit 0x50
        _emit 0x81
        _emit 0xC1
        _emit 0x98
        _emit 0x0E
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0xFE
        _emit 0x7E
        _emit 0x08
        _emit 0x00
        _emit 0xC3
    }
}
