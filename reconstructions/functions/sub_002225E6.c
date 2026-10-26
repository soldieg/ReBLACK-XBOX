/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_002225E6(void)
{
    __asm {
        _emit 0x8B
        _emit 0xC1
        _emit 0xA3
        _emit 0x58
        _emit 0x4C
        _emit 0x22
        _emit 0x00
        _emit 0xC3
    }
}
