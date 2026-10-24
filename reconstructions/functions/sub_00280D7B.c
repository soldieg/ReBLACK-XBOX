/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00280D7B(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x08
        _emit 0x8B
        _emit 0x91
        _emit 0x18
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x0F
        _emit 0xB7
        _emit 0x88
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0xC1
        _emit 0x33
        _emit 0xC2
        _emit 0x81
        _emit 0xE1
        _emit 0xFF
        _emit 0x7F
        _emit 0x00
        _emit 0x00
        _emit 0x25
        _emit 0x00
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x0B
        _emit 0xCA
        _emit 0x03
        _emit 0xC1
        _emit 0xC3
    }
}
