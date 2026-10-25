/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00040130(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x10
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x0C
        _emit 0x50
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x0C
        _emit 0x51
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x0C
        _emit 0x52
        _emit 0x50
        _emit 0x51
        _emit 0x68
        _emit 0x70
        _emit 0x7A
        _emit 0x29
        _emit 0x00
        _emit 0xE8
        _emit 0xFD
        _emit 0x31
        _emit 0xFF
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x18
        _emit 0xC3
    }
}
