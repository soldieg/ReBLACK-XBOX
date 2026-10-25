/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0002ABC0(void)
{
    __asm {
        _emit 0xE8
        _emit 0x2B
        _emit 0xF3
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x0C
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x08
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x50
        _emit 0x51
        _emit 0x52
        _emit 0xE8
        _emit 0x37
        _emit 0xF3
        _emit 0x23
        _emit 0x00
        _emit 0xC3
    }
}
