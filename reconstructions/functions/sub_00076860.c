/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00076860(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0xB1
        _emit 0x9C
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x57
        _emit 0x8D
        _emit 0xB9
        _emit 0x70
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0xFF
        _emit 0x8B
        _emit 0xCE
        _emit 0xE8
        _emit 0x99
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x76
        _emit 0x2C
        _emit 0x3B
        _emit 0xF7
        _emit 0x75
        _emit 0xF2
        _emit 0x5F
        _emit 0x5E
        _emit 0xC3
    }
}
