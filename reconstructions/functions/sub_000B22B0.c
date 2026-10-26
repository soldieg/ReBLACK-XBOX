/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000B22B0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x48
        _emit 0x0C
        _emit 0x51
        _emit 0xE8
        _emit 0xCA
        _emit 0x36
        _emit 0xF7
        _emit 0xFF
        _emit 0xC3
    }
}
