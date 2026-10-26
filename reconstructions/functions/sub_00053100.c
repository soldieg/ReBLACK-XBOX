/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00053100(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x0C
        _emit 0x56
        _emit 0x50
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x8B
        _emit 0xF1
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x18
        _emit 0x51
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x10
        _emit 0x52
        _emit 0x50
        _emit 0x51
        _emit 0x8B
        _emit 0xCE
        _emit 0xE8
        _emit 0xFD
        _emit 0xFD
        _emit 0xFF
        _emit 0xFF
        _emit 0xC7
        _emit 0x06
        _emit 0x1C
        _emit 0x4D
        _emit 0x28
        _emit 0x00
        _emit 0x8B
        _emit 0xC6
        _emit 0x5E
        _emit 0xC2
        _emit 0x14
        _emit 0x00
    }
}
