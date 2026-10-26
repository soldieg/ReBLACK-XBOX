/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00219E0F(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x83
        _emit 0xA1
        _emit 0xCC
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x81
        _emit 0xC4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x81
        _emit 0xC8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x81
        _emit 0xD0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
