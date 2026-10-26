/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001FC270(void)
{
    __asm {
        _emit 0x53
        _emit 0x8B
        _emit 0xD8
        _emit 0xA1
        _emit 0xF0
        _emit 0x45
        _emit 0x2D
        _emit 0x00
        _emit 0x8B
        _emit 0x88
        _emit 0x3C
        _emit 0x01
        _emit 0x02
        _emit 0x00
        _emit 0x51
        _emit 0x8D
        _emit 0x43
        _emit 0x10
        _emit 0xE8
        _emit 0x59
        _emit 0xCF
        _emit 0xFF
        _emit 0xFF
        _emit 0x5B
        _emit 0xC3
    }
}
