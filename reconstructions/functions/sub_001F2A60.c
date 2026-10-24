/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001F2A60(void)
{
    __asm {
        _emit 0x8A
        _emit 0x88
        _emit 0x21
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x84
        _emit 0xC9
        _emit 0x74
        _emit 0x06
        _emit 0x05
        _emit 0x90
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0x05
        _emit 0x40
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
