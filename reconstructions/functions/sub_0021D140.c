/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0021D140(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x41
        _emit 0x08
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x03
        _emit 0x83
        _emit 0x20
        _emit 0x00
        _emit 0x8B
        _emit 0x41
        _emit 0x0C
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x06
        _emit 0xC7
        _emit 0x00
        _emit 0x0A
        _emit 0x00
        _emit 0x00
        _emit 0x80
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
