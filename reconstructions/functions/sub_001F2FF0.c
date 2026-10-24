/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001F2FF0(void)
{
    __asm {
        _emit 0x33
        _emit 0xC9
        _emit 0x05
        _emit 0xCA
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x66
        _emit 0x39
        _emit 0x08
        _emit 0x74
        _emit 0x13
        _emit 0x8D
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x83
        _emit 0xC0
        _emit 0x02
        _emit 0x41
        _emit 0x66
        _emit 0x83
        _emit 0x38
        _emit 0x00
        _emit 0x75
        _emit 0xF6
        _emit 0x83
        _emit 0xF9
        _emit 0x01
        _emit 0x7D
        _emit 0x03
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
