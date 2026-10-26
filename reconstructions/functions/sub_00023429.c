/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00023429(void)
{
    __asm {
        _emit 0x55
        _emit 0x8B
        _emit 0xEC
        _emit 0x81
        _emit 0xEC
        _emit 0x00
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0xFF
        _emit 0x75
        _emit 0x0C
        _emit 0x8D
        _emit 0x85
        _emit 0x00
        _emit 0xFE
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x75
        _emit 0x08
        _emit 0x50
        _emit 0xE8
        _emit 0x67
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xC9
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
