/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0027EFAC(void)
{
    __asm {
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x41
        _emit 0x1C
        _emit 0x89
        _emit 0x51
        _emit 0x1C
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
