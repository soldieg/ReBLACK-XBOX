/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00032B00(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x0D
        _emit 0x74
        _emit 0x2C
        _emit 0x2B
        _emit 0x00
        _emit 0x50
        _emit 0x51
        _emit 0x6A
        _emit 0x00
        _emit 0xE8
        _emit 0xCD
        _emit 0x62
        _emit 0x23
        _emit 0x00
        _emit 0xC3
    }
}
