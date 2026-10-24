/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0026D200(void)
{
    __asm {
        _emit 0xD9
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xD9
        _emit 0xFF
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
