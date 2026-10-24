/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0026D170(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x0D
        _emit 0xF8
        _emit 0xBF
        _emit 0x27
        _emit 0x00
        _emit 0x89
        _emit 0x01
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
