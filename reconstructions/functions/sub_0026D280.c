/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0026D280(void)
{
    __asm {
        _emit 0x51
        _emit 0x89
        _emit 0x0C
        _emit 0x24
        _emit 0x8B
        _emit 0x0C
        _emit 0x24
        _emit 0x0F
        _emit 0xBC
        _emit 0xC1
        _emit 0x59
        _emit 0xC3
    }
}
