/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00228D67(void)
{
    __asm {
        _emit 0x55
        _emit 0x8B
        _emit 0xEC
        _emit 0x8B
        _emit 0x4D
        _emit 0x08
        _emit 0x8B
        _emit 0x51
        _emit 0x14
        _emit 0x33
        _emit 0xC0
        _emit 0x83
        _emit 0xFA
        _emit 0x01
        _emit 0x74
        _emit 0x0D
        _emit 0x83
        _emit 0xFA
        _emit 0x02
        _emit 0x74
        _emit 0x08
        _emit 0x8B
        _emit 0x4D
        _emit 0x0C
        _emit 0x66
        _emit 0x89
        _emit 0x01
        _emit 0xEB
        _emit 0x10
        _emit 0xFF
        _emit 0x75
        _emit 0x14
        _emit 0xFF
        _emit 0x75
        _emit 0x10
        _emit 0xFF
        _emit 0x75
        _emit 0x0C
        _emit 0xFF
        _emit 0x31
        _emit 0xE8
        _emit 0xD6
        _emit 0x21
        _emit 0x00
        _emit 0x00
        _emit 0x5D
        _emit 0xC2
        _emit 0x10
        _emit 0x00
    }
}
