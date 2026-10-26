/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0008B1F0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x0C
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x08
        _emit 0x6A
        _emit 0x00
        _emit 0x50
        _emit 0x51
        _emit 0x6A
        _emit 0x00
        _emit 0xE8
        _emit 0x72
        _emit 0x7B
        _emit 0xF9
        _emit 0xFF
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x89
        _emit 0x01
        _emit 0xF7
        _emit 0xD8
        _emit 0x1B
        _emit 0xC0
        _emit 0x23
        _emit 0xC1
        _emit 0xC3
    }
}
