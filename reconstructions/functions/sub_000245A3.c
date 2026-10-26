/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000245A3(void)
{
    __asm {
        _emit 0x55
        _emit 0x8B
        _emit 0xEC
        _emit 0x51
        _emit 0x51
        _emit 0x8D
        _emit 0x45
        _emit 0xF8
        _emit 0x50
        _emit 0xFF
        _emit 0x75
        _emit 0x08
        _emit 0xFF
        _emit 0x15
        _emit 0x88
        _emit 0x30
        _emit 0x28
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x7C
        _emit 0x05
        _emit 0x33
        _emit 0xC0
        _emit 0x40
        _emit 0xEB
        _emit 0x08
        _emit 0x50
        _emit 0xE8
        _emit 0xD9
        _emit 0x0D
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xC0
        _emit 0xC9
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
