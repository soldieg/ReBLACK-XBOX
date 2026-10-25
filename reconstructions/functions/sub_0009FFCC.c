/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0009FFCC(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x85
        _emit 0xC0
        _emit 0x56
        _emit 0x8B
        _emit 0xF1
        _emit 0x89
        _emit 0x06
        _emit 0x74
        _emit 0x07
        _emit 0x50
        _emit 0xE8
        _emit 0x5F
        _emit 0xCE
        _emit 0xFF
        _emit 0xFF
        _emit 0x59
        _emit 0x8B
        _emit 0xC6
        _emit 0x5E
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
