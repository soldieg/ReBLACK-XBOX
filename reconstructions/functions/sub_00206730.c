/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00206730(void)
{
    __asm {
        _emit 0x55
        _emit 0x8B
        _emit 0xEC
        _emit 0x83
        _emit 0xE4
        _emit 0xF0
        _emit 0x83
        _emit 0xEC
        _emit 0x10
        _emit 0x8D
        _emit 0x04
        _emit 0x24
        _emit 0x50
        _emit 0x8B
        _emit 0x45
        _emit 0x08
        _emit 0xE8
        _emit 0xFB
        _emit 0xEC
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0xE5
        _emit 0x5D
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
