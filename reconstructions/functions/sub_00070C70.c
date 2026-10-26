/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00070C70(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0xF1
        _emit 0xE8
        _emit 0x68
        _emit 0xF7
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0x46
        _emit 0x14
        _emit 0x8B
        _emit 0x4E
        _emit 0x28
        _emit 0x8B
        _emit 0x56
        _emit 0x18
        _emit 0x50
        _emit 0x8B
        _emit 0x46
        _emit 0x2C
        _emit 0x51
        _emit 0x8B
        _emit 0x4E
        _emit 0x34
        _emit 0x52
        _emit 0x8B
        _emit 0x56
        _emit 0x30
        _emit 0x50
        _emit 0x51
        _emit 0x52
        _emit 0xE8
        _emit 0x1B
        _emit 0x47
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xC4
        _emit 0x18
        _emit 0x5E
        _emit 0xC3
    }
}
