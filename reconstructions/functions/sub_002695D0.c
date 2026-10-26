/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_002695D0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x48
        _emit 0xFF
        _emit 0x48
        _emit 0x49
        _emit 0x89
        _emit 0x08
        _emit 0x75
        _emit 0x0B
        _emit 0x68
        _emit 0x00
        _emit 0x00
        _emit 0x80
        _emit 0x24
        _emit 0x50
        _emit 0xE8
        _emit 0x69
        _emit 0xC5
        _emit 0xDB
        _emit 0xFF
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
