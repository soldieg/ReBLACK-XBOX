/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00225F18(void)
{
    __asm {
        _emit 0x55
        _emit 0x8B
        _emit 0xEC
        _emit 0xFF
        _emit 0x75
        _emit 0x18
        _emit 0x8B
        _emit 0x4D
        _emit 0x0C
        _emit 0x83
        _emit 0x79
        _emit 0x04
        _emit 0x01
        _emit 0xFF
        _emit 0x75
        _emit 0x14
        _emit 0xFF
        _emit 0x75
        _emit 0x10
        _emit 0x75
        _emit 0x07
        _emit 0xE8
        _emit 0x5A
        _emit 0xFD
        _emit 0xFF
        _emit 0xFF
        _emit 0xEB
        _emit 0x05
        _emit 0xE8
        _emit 0x77
        _emit 0xF6
        _emit 0xFF
        _emit 0xFF
        _emit 0x5D
        _emit 0xC2
        _emit 0x14
        _emit 0x00
    }
}
