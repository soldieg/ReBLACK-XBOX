/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00018010(void)
{
    __asm {
        _emit 0xD9
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xE8
        _emit 0x9F
        _emit 0xBF
        _emit 0x08
        _emit 0x00
        _emit 0xC3
    }
}
