/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0023FAEE(void)
{
    __asm {
        _emit 0x0F
        _emit 0xEF
        _emit 0xC0
        _emit 0x0F
        _emit 0x7F
        _emit 0x01
        _emit 0x0F
        _emit 0x7F
        _emit 0x41
        _emit 0x08
        _emit 0x0F
        _emit 0x7F
        _emit 0x41
        _emit 0x10
        _emit 0x0F
        _emit 0x7F
        _emit 0x41
        _emit 0x18
        _emit 0x0F
        _emit 0x77
        _emit 0xC3
    }
}
